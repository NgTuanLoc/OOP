//
//  main.cpp
//  linear_equation
//
//  Created by Macintosh HD on 12/10/2021.
//
//2. Xây dựng class GiaiPTBac1:
//
//– Thuộc tính:
//  hệ số a, b.
//– Phương thức:
//  Khởi tạo 2 hệ số a, b đều = 0
//  Khởi tao hệ số a=0, b tùy ý
//  Khởi tạo hệ số a, b tùy ý
//  Nhập 2 hệ số a, b
//  Giải phương trình
//  Xuất phương trình

#include "linear_equation.hpp"

int main(int argc, const char * argv[]) {
    linear_equation a;
    a.set();
    a.display_result();
    return 0;
}
