#include "Mang1C.h";

MANG1C::MANG1C() 
{
	n = 20;
	a = new int[20];
}
MANG1C::MANG1C(int len)
{
	n = len;
	a = new int[len];
}
MANG1C::MANG1C(MANG1C& m)
{
	n = m.n;
	a = new int[m.n];
	for (int i = 0; i < n; i++)
	{
		a[i] = m.a[i];
	}
}
MANG1C::~MANG1C() 
{
	delete[] a;
}
void MANG1C::Nhap() 
{
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap gia tri thu " << i + 1 << ": ";
		cin >> a[i];
	}
}
void MANG1C::Xuat() 
{
	cout << "Cac phan tu cua mang 1 chieu: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Phan tu thu " << i << " la: " << a[i] << endl;
	}
}
void MANG1C::LietKeSoNguyenTo() 
{	
	cout << "Cac so nguyen to co trong Mang la: ";
	for (int i = 0; i < n; i++)
	{
		int dem = 0;
		if (a[i] >= 2)
		{
			for (int j = 2; j <= sqrt(a[i]); j++)
				if (a[i] % j == 0)
					dem++;
		}
		if (dem == 0)
			cout << "\t" << a[i];
	}
	cout << "\n";
}
int MANG1C::DemSoChinhPhuong() 
{	
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == 1)
			dem++;
		for (int j = 1; j <= a[i] / 2; j++)
			if (j * j == a[i])
				dem++;
	}
	return dem;
}
int MANG1C::TongSoHoanThien() 
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		int s = 0;
		for (int j = 1; j <= a[i] / 2; j++) {
			if (a[i] % j == 0)
				s += j;
		}
		if (s == a[i])
			sum += a[i];
	}
	return sum;	
}
double MANG1C::TrungBinhSoDoiXung() 
{
	int sum = 0;
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		int nInput = a[i];
		int nSoDao = 0, nRem;
		while (nInput != 0)
		{
			nRem = nInput % 10;
			nSoDao = (nSoDao * 10) + nRem;
			nInput = nInput / 10;
		}
		if (nInput == a[i])
		{
			sum += a[i];
			dem++;
		}
	}
	if (dem != 0)
		return (double)(sum / dem);
	else
		return -1;
}
bool MANG1C::KiemTraToanLe()
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 1)
			dem++;
	}
	if (dem == n)
		return 1;
	else
		return 0;
}
int MANG1C::TimSoChanBeNhat()
{
	if (KiemTraToanLe() == 1)
		return -1;
	int d, vt;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			d = i;
			break;
		}
	}
	vt = d;
	for (int i = d + 1; i < n; i++)
		if (a[i] % 2 == 0 && a[i] < a[vt])
			vt = i;
	return a[vt];
}
void MANG1C::SapXepMangTang()
{
	int Mid;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (a[j] > a[i])
			{
				Mid = a[i];
				a[i] = a[j];
				a[j] = Mid;
			}
		}
	}
}
void MANG1C::SapXepMangGiam()
{
	int Mid;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (a[j] < a[i])
			{
				Mid = a[i];
				a[i] = a[j];
				a[j] = Mid;
			}
		}
	}
}
void MANG1C::XoaPhanTu(int vt)
{
	for (int i = vt; i < n; i++)
		a[i] = a[i + 1];
	n--;
}
void MANG1C::ThemPhanTu(int vt, int gt)
{
	n++;
	for (int i = n; i > vt; i--)
		a[i] = a[i - 1];
	a[vt] = gt;

}
void MANG1C::TimPhanTu(int gt)
{
	int vt = -1;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == gt)
		{
			vt = i;
			cout << "Phan tu can tim o vi tri: " << vt << endl;
		}
	}
	if (vt == -1)
	{
		cout << "Khong tim thay phan tu." << endl;
	}
}