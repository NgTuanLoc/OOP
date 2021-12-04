//
//  Array1D.cpp
//  Array1D
//
//  Created by Macintosh HD on 27/11/2021.
//

#include "Array1D.hpp"

Mang1C::Mang1C()
{
  n = 0;
  a = NULL;
}
Mang1C::Mang1C(int n)
{
  this->n = n;
  a = new int[n];
}
Mang1C::~Mang1C()
{
  delete[] a;
}
Mang1C::Mang1C(const Mang1C &m)
{
  n = m.n;
  a = new int[n];
  for (int i = 0; i < n; i++)
  {
    a[i] = m.a[i];
  }
}
void Mang1C::PhatSinhMoi()
{
  do
  {
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;
  } while (n < 0);
  delete[] a;
  a = new int[n];
  srand(time(NULL));
  int x, y;
  cout << "Nhap mien gia tri de phat sinh: ";
  cin >> x >> y;
  int mi = min(x, y);
  int ma = max(x, y);
  for (int i = 0; i < n; i++)
  {
    a[i] = rand() % (ma - mi + 1) + mi;
  }
}
void Mang1C::PhatSinhLai()
{
  if (a == NULL)
  {
    do
    {
      cout << "Nhap so phan tu cua mang: ";
      cin >> n;
    } while (n < 0);
    delete[] a;
    a = new int[n];
  }
  srand(time(NULL));
  int x, y;
  cout << "Nhap mien gia tri de phat sinh: ";
  cin >> x >> y;
  int mi = min(x, y);
  int ma = max(x, y);
  for (int i = 0; i < n; i++)
  {
    a[i] = rand() % (ma - mi + 1) + mi;
  }
}
void Mang1C::NhapMoi()
{
  cout << "Nhap so phan tu cua mang: ";
  cin >> n;
  delete[] a;
  a = new int[n];
  for (int i = 0; i < n; i++)
  {
    cout << "Nhap phan tu thu " << i + 1 << ": ";
    cin >> a[i];
  }
}
void Mang1C::NhapLai()
{
  if (a == NULL)
  {
    do
    {
      cout << "Nhap so phan tu cua mang: ";
      cin >> n;
    } while (n < 0);
    delete[] a;
    a = new int[n];
  }
  for (int i = 0; i < n; i++)
  {
    cout << "Nhap phan tu thu " << i + 1 << ": ";
    cin >> a[i];
  }
}
void Mang1C::Xuat()
{
  if (a == NULL)
  {
    cout << "Mang chua duoc tao";
  }
  else
  {
    for (int i = 0; i < n; i++)
    {
      cout << "a[" << i << "] = " << a[i] << endl;
    }
  }
}
bool Mang1C::KiemTraSNT(int x)
{
  if (x < 2)
    return false;
  for (int i = 2; i <= sqrt(x); i++)
  {
    if (x % i == 0)
      return false;
  }
  return true;
}
void Mang1C::LietKeSNT()
{
  int dem = 0;
  for (int i = 0; i < n; i++)
  {
    if (KiemTraSNT(a[i]))
    {
      cout << a[i] << " ";
      dem++;
    }
  }
  if (dem == 0)
    cout << "Khong co so nguyen to nao";
}
int Mang1C::DemSNT()
{
  int dem = 0;
  for (int i = 0; i < n; i++)
  {
    if (KiemTraSNT(a[i]))
      dem++;
  }
  return dem;
}
int Mang1C::TinhTongSNT()
{
  int tong = 0;
  for (int i = 0; i < n; i++)
  {
    if (KiemTraSNT(a[i]))
      tong += a[i];
  }
  return tong;
}
double Mang1C::TinhTrungBinhSNT()
{
  int tong = 0;
  for (int i = 0; i < n; i++)
  {
    if (KiemTraSNT(a[i]))
      tong += a[i];
  }
  return (double)tong / DemSNT();
}
bool Mang1C::KiemTraMangLe()
{
  for (int i = 0; i < n; i++)
  {
    if (a[i] % 2 == 0)
      return false;
  }
  return true;
}
int Mang1C::TimSoChanBeNhat()
{
  int min = a[0];
  for (int i = 0; i < n; i++)
  {
    if (a[i] % 2 == 0 && a[i] < min)
      min = a[i];
  }
  return min;
}
void Mang1C::SapXepTangDan()
{
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (a[i] > a[j])
      {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }
}
void Mang1C::SapXepGiamDan()
{
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (a[i] < a[j])
      {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }
}
void Mang1C::XoaPhanTuViTri()
{
  int i;
  cout << "Nhap vao vi tri can xoa: ";
  cin >> i;
  for (int j = i; j < n - 1; j++)
  {
    a[j] = a[j + 1];
  }
  n--;
}
void Mang1C::ThemPhanTuViTri()
{
  int i, x;
  cout << "Nhap vao vi tri can them: ";
  cin >> i;
  cout << "Nhap vao gia tri can them: ";
  cin >> x;
  for (int j = n; j > i; j--)
  {
    a[j] = a[j - 1];
  }
  a[i] = x;
  n++;
}
void Mang1C::TimKiemPhanTu()
{
  int x, dem = 0;
  cout << "Nhap gia tri can tim: ";
  cin >> x;
  for (int i = 0; i < n; i++)
  {
    if (a[i] == x)
    {
      cout << "Vi tri can tim: a[" << i << "] = " << x << endl;
      dem++;
    }
  }
  if (dem == 0)
    cout << "Khong tim thay gia tri can tim.\n";
}
