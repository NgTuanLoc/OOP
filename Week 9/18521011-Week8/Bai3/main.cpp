//3. Xây dựng class ma trận vuông cấp n (MaTranVuong) bao gồm:
//
//Thuộc tính:
//Số cấp ma trận (int n)
//Con trỏ tới vùng nhớ động chứa các phần tử ma trận (int **p)
//Phương thức:
//Thiết lập không tham số
//Thiết lập truyền tham số n
//Thiết lập sao chép
//Hủy
//Nhập giá trị các phần tử ma trận
//Xuất giá trị các phần tử ma trận
//Liệt kê giá trị các phần tử lẻ nằm trên đường chéo chính của ma trận.
//Đếm số lượng các phần tử có ký số cuối là 3 nằm trên đường chéo phụ của ma trận.
//Kiểm tra xem có tồn tại phần tử âm ở nửa mảng vuông phía trên đường chéo chính hay không?
//Tìm phần tử chẵn đầu tiên ở nửa mảng vuông phía dưới đường chéo phụ của ma trận.
//Sắp xếp giảm dần các phần tử trên đường chéo phụ của ma trận.

#include "MaTranVuong.h"

int main()
{
	MATRANVUONG p(5);
	p.Nhap();
	p.LietKeSoLeDuongCheoChinh();
	cout << "Dem so phan tu ket thuc bang 3 tren duong cheo phu: " << p.DemSoKetThuc3DuongCheoPhu() << endl;
	cout << "Kiem tra co phan tu am nua tren duong cheo chinh khong? " << p.KiemTraAmNuaTrenDuongCheoChinh() << endl;
	cout << "Phan tu la so chan dau tien nua duoi duong cheo phu: " << p.SoChanDauTienNuaDuoiDuongCheoPhu() << endl;
	p.SapXepGianDanDuongCheoPhu();
	p.Xuat();
	system("pause");
}
