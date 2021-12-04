//
//  Array1D.hpp
//  Array1D
//
//  Created by Macintosh HD on 27/11/2021.
//

#ifndef Array1D_hpp
#define Array1D_hpp

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;
class Mang1C
{
private:
  int *a;
  int n;
  bool KiemTraSNT(int x);
public:
  Mang1C();
  Mang1C(int n);
  ~Mang1C();
  Mang1C(const Mang1C &m);
  void PhatSinhMoi();
  void PhatSinhLai();
  void NhapMoi();
  void NhapLai();
  void Xuat();
  void LietKeSNT();
  int DemSNT();
  int TinhTongSNT();
  double TinhTrungBinhSNT();
  bool KiemTraMangLe();
  int TimSoChanBeNhat();
  void SapXepTangDan();
  void SapXepGiamDan();
  void XoaPhanTuViTri();
  void ThemPhanTuViTri();
  void TimKiemPhanTu();
};


#endif /* Array1D_hpp */
