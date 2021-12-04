#include <iostream>
using namespace std;
class MATRAN
{
private:
	int sd, sc;
	int** p;
public:
	MATRAN();
	MATRAN(int, int);
	MATRAN(MATRAN&);
	~MATRAN();
	void Nhap();
	void Xuat();
	void LietKeSoNguyenTo();
	int DemSoChinhPhuong();
	int TongSoHoanThienDongk(int);
	double TrungBinhSoDoiXungDongk(int);
	void SapXepMangTangDongk(int);
};
