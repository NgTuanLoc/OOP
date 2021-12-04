#include <iostream>
using namespace std;
class MANG1C
{
private:
	int n;
	int* a;
public:
	MANG1C();
	MANG1C(int);
	MANG1C(MANG1C&);
	~MANG1C();
	void Nhap();
	void Xuat();
	void LietKeSoNguyenTo();
	int DemSoChinhPhuong();
	int TongSoHoanThien();
	double TrungBinhSoDoiXung();
	bool KiemTraToanLe();
	int TimSoChanBeNhat();
	void SapXepMangTang();
	void SapXepMangGiam();
	void XoaPhanTu(int);
	void ThemPhanTu(int, int);
	void TimPhanTu(int);
};

