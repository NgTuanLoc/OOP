#include <iostream>
using namespace std;
class MATRANVUONG
{
private:
	int n;
	int** p;
public:
	MATRANVUONG();
	MATRANVUONG(int);
	MATRANVUONG(MATRANVUONG&);
	~MATRANVUONG();
	void Nhap();
	void Xuat();
	void LietKeSoLeDuongCheoChinh();
	int DemSoKetThuc3DuongCheoPhu();
	bool KiemTraAmNuaTrenDuongCheoChinh();
	int SoChanDauTienNuaDuoiDuongCheoPhu();
	void SapXepGianDanDuongCheoPhu();
};

