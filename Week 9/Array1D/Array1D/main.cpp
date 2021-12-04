//
//  main.cpp
//  Array1D
//
//  Created by Macintosh HD on 27/11/2021.
//

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

#include "Array1D.hpp"

int main()
{
  Mang1C a;
  Mang1C b;
  int chon;
  do
  {
    system("cls");
    cout << "---------CHUONG TRINH XU LY MANG 1 CHIEU---------\n";
    cout << "1. Phat sinh mang moi.\n";
    cout << "2. Phat sinh mang lai.\n";
    cout << "3. Nhap mang moi.\n";
    cout << "4. Nhap mang lai.\n";
    cout << "5. Sao chep mang.\n";
    cout << "6. Xuat mang.\n";
    cout << "7. Liet ke cac phan tu la so nguyen to.\n";
    cout << "8. Dem cac phan tu la so nguyen to.\n";
    cout << "9. Tinh tong cac phan tu la so nguyen to.\n";
    cout << "10. Tinh trung binh cong cac phan tu la so nguyen to.\n";
    cout << "11. Kiem tra mang co toan cac phan tu la so le hay khong?\n";
    cout << "12. Tim gia tri phan tu chan be nhat trong mang.\n";
    cout << "13. Sap xep mang tang dan.\n";
    cout << "14. Sap xep mang giam dan.\n";
    cout << "15. Xoa phan tu tai vi tri bat ky.\n";
    cout << "16. Them phan tu tai vi tri bat ky.\n";
    cout << "17. Tim phan tu tai vi tri bat ky.\n";
    cout << "0. Thoat CT\n";
    cout << "-----------------------------------\n";
    cout << "Nhap lua chon: ";
    cin >> chon;
    switch (chon)
    {
    case 0:
      a.~Mang1C();
      b.~Mang1C();
      cout << "Dang thoat chuong trinh!\n";
      break;
    case 1:
      a.PhatSinhMoi();
      cout << "Mang moi da duoc phat sinh!\n";
      break;
    case 2:
      a.PhatSinhLai();
      cout << "Mang lai da duoc phat sinh!\n";
      break;
    case 3:
      a.NhapMoi();
      cout << "Mang da duoc nhap!\n";
      break;
    case 4:
      a.NhapLai();
      cout << "Mang da duoc nhap!\n";
      break;
    case 5:
      a = b;
      cout << "Mang da duoc sao chep!\n";
      break;
    case 6:
      a.Xuat();
      break;
    case 7:
      a.LietKeSNT();
      break;
    case 8:
      if (a.DemSNT() == 0)
      {
        cout << "Mang chua co phan tu la so nguyen to!\n";
      }
      else
      {
        cout << "Mang co " << a.DemSNT() << " phan tu la so nguyen to!\n";
      }
      break;
    case 9:
      if (a.DemSNT() == 0)
      {
        cout << "Mang chua co phan tu la so nguyen to!\n";
        break;
      }
      else
      {
        cout << "Tong cac phan tu la so nguyen to trong mang la: " << a.TinhTongSNT() << endl;
      }
      break;
    case 10:
      if (a.DemSNT() == 0)
      {
        cout << "Mang chua co phan tu la so nguyen to!\n";
        break;
      }
      else
      {
        cout << "Trung binh cong cac phan tu la so nguyen to trong mang la: " << a.TinhTrungBinhSNT() << endl;
      }
      break;
    case 11:
      if (a.KiemTraMangLe())
      {
        cout << "Mang co toan cac phan tu la so le!\n";
      }
      else
      {
        cout << "Mang khong co toan cac phan tu la so le!\n";
      }
      break;
    case 12:
      if (a.KiemTraMangLe())
      {
        cout << "Mang khong co phan tu la so chan";
      }
      else
      {
        cout << "Phan tu chan be nhat trong mang la: " << a.TimSoChanBeNhat() << endl;
      }
      break;
    case 13:
      a.SapXepTangDan();
      cout << "Mang da duoc sap xep tang dan!\n";
      break;
    case 14:
      a.SapXepGiamDan();
      cout << "Mang da duoc sap xep giam dan!\n";
      break;
    case 15:
      a.XoaPhanTuViTri();
      cout << "Mang da duoc xoa phan tu tai vi tri!\n";
      break;
    case 16:
      a.ThemPhanTuViTri();
      cout << "Mang da duoc them phan tu tai vi tri!\n";
      break;
    case 17:
      a.TimKiemPhanTu();
      break;
    default:
      cout << "Lua chon khong hop le! Hay nhap lai.\n";
      break;
    }
    system("pause");
  } while (chon != 0);
  return 0;
}
