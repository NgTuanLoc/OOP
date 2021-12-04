#include "MaTran.h";

MATRAN::MATRAN()
{
	sd = 20;
	sc = 20;
	p = new int *[400];
}
MATRAN::MATRAN(int d, int c)
{
	sd = d;
	sc = c;
	p = new int* [d*c];
}
MATRAN::MATRAN(MATRAN& m)
{
	sd = m.sd;
	sc = m.sc;
	p = new int* [m.sd];
	for (int i = 0; i < m.sd; i++)
	{
		p[i] = new int[m.sc];
	}
	for (int i = 0; i < m.sd; i++)
	{
		for (int j = 0; j < m.sc; j++)
		{
			p[i][j] = m.p[i][j];
		}
	}
}
MATRAN::~MATRAN()
{
	delete[] p;
}
void MATRAN::Nhap()
{
	p = new int* [sd];
	for (int i = 0; i < sd; i++)
		p[i] = new int[sc];
	for (int i = 0; i < sd; i++)
	{
		for (int j = 0; j < sc; j++)
		{
			cout << "Nhap gia tri tai p[" << i << "]" << "[" << j << "] = ";
			cin >> p[i][j];
		}
	}
}
void MATRAN::Xuat()
{
	cout << "Cac phan tu cua ma tran: " << endl;
	for (int i = 0; i < sd; i++)
	{
		for (int j = 0; j < sc; j++)
		{
			cout << p[i][j] << "\t";
		}
		cout << endl;
	}
}
void MATRAN::LietKeSoNguyenTo()
{
	cout << "Cac so nguyen to co trong Mang la: ";
	for (int i = 0; i < sd; i++)
	{
		for (int j = 0; j < sc; j++)
		{
			int dem = 0;
			if (p[i][j] >= 2)
			{
				for (int k = 2; k <= sqrt(p[i][j]); k++)
					if (p[i][j] % k == 0)
						dem++;
				if (dem == 0)
					cout << "\t" << p[i][j];
			}
		}
	}
	cout << endl;
}
int MATRAN::DemSoChinhPhuong()
{
	int dem = 0;
	for (int i = 0; i < sd; i++)
	{
		for (int j = 0; j < sc; j++)
		{
			if (p[i][j] == 1 || p[i][j] == 0)
				dem++;
			for (int k = 1; k <= p[i][j] / 2; k++)
				if (k * k == p[i][j])
				{
					dem++;
				}
		}
	}
	return dem;
}
int MATRAN::TongSoHoanThienDongk(int k)
{
	int sum = 0;
	for (int i = 0; i < sc; i++)
	{
		int s = 0;
		for (int j = 1; j <= p[k][i] / 2; j++) {
			if (p[k][i] % j == 0)
				s += j;
		}
		if (s == p[k][i])
			sum += p[k][i];
	}
	return sum;
}
double MATRAN::TrungBinhSoDoiXungDongk(int k)
{
	double TB = 0;
	double sum = 0;
	int dem = 0;
	for (int i = 0; i < sc; i++)
	{
		int nInput = p[k][i];
		int nSoDao = 0, nRem;
		while (nInput != 0)
		{
			nRem = nInput % 10;
			nSoDao = (nSoDao * 10) + nRem;
			nInput = nInput / 10;
		}
		if (nSoDao == p[k][i])
		{
			cout << p[k][i];
			sum += p[k][i];
			dem++;
		}
	}
	TB = sum / dem;
	if (dem != 0)
		return TB;
	else
		return -1;
}
void MATRAN::SapXepMangTangDongk(int k)
{
	int Mid;
	for (int i = 0; i < sc; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (p[k][j] > p[k][i])
			{
				Mid = p[k][i];
				p[k][i] = p[k][j];
				p[k][j] = Mid;
			}
		}
	}
}