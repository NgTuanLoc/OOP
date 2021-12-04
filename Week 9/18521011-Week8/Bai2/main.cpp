//2. Xây dựng class ma trận (MaTran) bao gồm:
//
//Thuộc tính:
//Số dòng và số cột (int sd, sc)
//Con trỏ tới vùng nhớ động chứa các phần tử ma trận (int **p)
//Phương thức:
//Thiết lập không tham số
//Thiết lập truyền 2 tham số d, c
//Thiết lập sao chép
//Hủy
//Nhập giá trị các phần tử ma trận
//Xuất giá trị các phần tử ma trận
//Liệt kê giá trị các phần tử là số nguyên tố của ma trận.
//Đếm số lượng các phần tử là số chính phương của ma trận.
//Tính tổng giá trị các phần tử là số hoàn thiện trên dòng k của ma trận.
//Tính TB cộng giá trị các phần tử là số đối xứng trên cột k của ma trận.
//Sắp xếp tăng dần các phần tử trên dòng k của ma trận.

#include "MaTran.h"

int main()
{
	MATRAN p(3,4);
	p.Nhap();
	p.LietKeSoNguyenTo();
	cout << "Dem so chinh phuong: " << p.DemSoChinhPhuong() << endl;
	cout << "Tong so hoang thien dong 2: " << p.TongSoHoanThienDongk(1) << endl;
	cout << "Trung binh so doi xung dong 2: " << p.TrungBinhSoDoiXungDongk(1) << endl;
	p.SapXepMangTangDongk(1);
	p.Xuat();
	system("pause");
}
