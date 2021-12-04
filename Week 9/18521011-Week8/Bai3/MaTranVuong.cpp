#include "MaTranVuong.h";

MATRANVUONG::MATRANVUONG()
{
	n = 400;
	p = new int* [400];
}
MATRANVUONG::MATRANVUONG(int c)
{
	n = c;
	p = new int* [c * c];
}
MATRANVUONG::MATRANVUONG(MATRANVUONG& m)
{
	n = m.n;
	p = new int* [m.n];
	for (int i = 0; i < m.n; i++)
	{
		p[i] = new int[m.n];
	}
	for (int i = 0; i < m.n; i++)
	{
		for (int j = 0; j < m.n; j++)
		{
			p[i][j] = m.p[i][j];
		}
	}
}
MATRANVUONG::~MATRANVUONG()
{
	delete[] p;
}
void MATRANVUONG::Nhap()
{
	p = new int* [n];
	for (int i = 0; i < n; i++)
		p[i] = new int[n];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap gia tri tai p[" << i << "]" << "[" << j << "] = ";
			cin >> p[i][j];
		}
	}
}
void MATRANVUONG::Xuat()
{
	cout << "Cac phan tu cua ma tran: " << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << p[i][j] << "\t";
		}
		cout << endl;
	}
}
void MATRANVUONG::LietKeSoLeDuongCheoChinh()
{
	cout << "Nhung so le tren duong cheo chinh la: ";
	for (int i = 0; i < n; i++)
	{
		if (p[i][i] % 2 == 1)
			cout << p[i][i] << "\t";
	}
	cout << endl;
}
int MATRANVUONG::DemSoKetThuc3DuongCheoPhu()
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (p[i][n - 1 - i] % 10 == 3)
			dem++;
	}
	return dem;
}
bool MATRANVUONG::KiemTraAmNuaTrenDuongCheoChinh()
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (p[j][i] < 0)
			{
				return 1;
				break;
			}
		}
	}
	return 0;
}
int MATRANVUONG::SoChanDauTienNuaDuoiDuongCheoPhu()
{
	for (int i = 0; i < n; i++)
	{
		for (int j = n - i; j < n; j++)
		{
			if (p[i][j] % 2 == 0)
			{
				return p[i][j];
				break;
			}
		}
	}
	return -1;
}
void MATRANVUONG::SapXepGianDanDuongCheoPhu()
{
	int mid;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (p[j][n - 1 - j] < p[i][n - 1 - i])
			{
				mid = p[i][n-1-i];
				p[i][n-1-i] = p[j][n-1-j];
				p[j][n-1-j] = mid;
			}
		}
		
	}
}