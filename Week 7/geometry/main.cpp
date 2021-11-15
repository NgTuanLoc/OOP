//
//  main.cpp
//  geometry
//
//  Created by Macintosh HD on 15/11/2021.
//
//Bài tập thực hành Tuần 7:
//===============================
//Tạo các lớp bao sau từ Lớp Điểm (class DIEM):
//
//1. Lớp Tam giác (class TAMGIAC):
//
//Thuộc tính: 3 đỉnh A, B, C (là 3 điểm).
//Phương thức: thiết lập/tạo/dựng (constructor), set và get giá trị các thuộc tính, nhập, xuất, di chuyển, tính chu vi, diện tích, kiểm tra hợp lệ, phân loại, >> và <<.
//2. Lớp Hình chữ nhật (class HCN) vuông góc thẳng đứng theo trục tọa độ:
//
//Thuộc tính: 2 đỉnh A, B (là 2 điểm) là đường chéo HCN.
//Phương thức: thiết lập/tạo/dựng (constructor), set và get giá trị các thuộc tính, nhập, xuất, di chuyển, tính chu vi, diện tích, kiểm tra hợp lệ, >> và <<.
//3. Lớp Hình tròn (class HTRON):
//
//Thuộc tính: tâm O (là điểm) và bán kính R.
//Phương thức: thiết lập/tạo/dựng (constructor), set và get giá trị các thuộc tính, nhập, xuất, di chuyển, tính chu vi, diện tích, kiểm tra hợp lệ, >> và <<.

#include "point.hpp"
#include "triangle.hpp"
#include "rectangle.hpp"
#include "circle.hpp"

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    Point point_1;
    cin>>point_1;
    cout<<point_1;
    Point point_2;
    cin>>point_2;
    cout<<point_2;

    cout<<point_1.is_coincide_check(point_2)<<endl;
    cout<<point_1.get_distance(point_2)<<endl;
    cout<<point_1.get_oposite_point()<<endl;

    Point a(1, -2);
    Point b(2, 1);
    Point c(-1, 4);
    Triangle tri(a, b, c);
    cout<<tri<<endl;
    cout<<tri.get_perimeter()<<endl;
    cout<<tri.get_area()<<endl;
    cout<<tri.get_triangle_type()<<endl;
    
    Point m(1, -2);
    Point n(2, 1);
    Point k(-1, 4);
    Point l(-1, 4);
    Rectangle rect(m, n, k, l);
    cout<<rect<<endl;
    cout<<rect.get_perimeter()<<endl;
    cout<<rect.get_area()<<endl;
    cout<<rect.get_Rectangle_type()<<endl;
    
    Point o(0, 0);
    Circle cir(o, 3);
    cout<<cir<<endl;
    cout<<cir.get_perimeter()<<endl;
    cout<<cir.get_area()<<endl;
    
    return 0;
}
