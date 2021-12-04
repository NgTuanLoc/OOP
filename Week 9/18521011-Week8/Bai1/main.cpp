//1. Xây dựng class mảng 1 chiều (Mang1C) bao gồm:
//
//Thuộc tính:
//Số phần tử mảng (int n)
//Con trỏ tới vùng nhớ động chứa các phần tử mảng (int *a)
//Phương thức:
//Thiết lập không tham số
//Thiết lập truyền tham số n
//Thiết lập sao chép
//Hủy
//Nhập giá trị các phần tử mảng
//Xuất giá trị các phần tử mảng
//Liệt kê giá trị các phần tử là số nguyên tố trong mảng.
//Đếm số lượng các phần tử là số chính phương trong mảng.
//Tính tổng giá trị các phần tử là số hoàn thiện trong mảng.
//Tính TB cộng giá trị các phần tử là số đối xứng trong mảng.
//Kiểm tra mảng có toàn phần tử lẻ hay không?
//Tìm giá trị phần tử chẵn bé nhất trong mảng.
//Sắp xếp mảng tăng / giảm dần.
//Xóa phần tử tại vị trí bất kỳ.
//Thêm phần tử tại vị trí bất kỳ.
//Tìm kiếm phần tử có giá trị bất kỳ.

#include "Mang1C.h"

int main()
{
	MANG1C a(6);
	a.Nhap();
	a.LietKeSoNguyenTo();
	cout << "Dem so chinh phuong: " << a.DemSoChinhPhuong() << endl;
	cout << "Tong so hoang thien: " << a.TongSoHoanThien() << endl;
	cout << "Trung binh so doi xung: " << a.TrungBinhSoDoiXung() << endl;
	cout << "Kiem tra toan le: " << a.KiemTraToanLe() << endl;
	cout << "So chan be nhat: " << a.TimSoChanBeNhat() << endl;
	a.SapXepMangTang();
	a.Xuat();
	a.SapXepMangGiam();
	a.Xuat();
	a.XoaPhanTu(2);
	a.Xuat();
	a.ThemPhanTu(1, 5);
	a.Xuat();
	a.TimPhanTu(4);
}
