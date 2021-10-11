//
//  main.cpp
//  Point
//
//  Created by Macintosh HD on 11/10/2021.
//
//– Thuộc tính:
//Tọa độ x, y.
//– Phương thức:
//Khởi tạo điểm
//Nhập điểm
//Xuất điểm
//Di chuyển điểm
//Kiểm tra 2 điểm có tọa độ trùng nhau không
//Tính khoảng cách giữa 2 điểm
//Lấy đối xứng 1 điểm qua gốc tọa độ
//Tính chu vi tam giác qua 3 điểm.
//Tính diện tích tam giác qua 3 điểm.
#include "point.hpp"

int main(int argc, const char * argv[]) {
    point a(-1, 2);
    a.display_point();
    
    a.set_point();
    a.display_point();
    
    cout<<"Point a move (1, 1)"<<endl;
    a.move();
    a.display_point();
    
    cout<<"Concided point check"<<endl;
    point b(-1, 2);
    point c(2, 3);
    cout<<a.is_concided_point(b)<<endl;
    cout<<a.is_concided_point(c)<<endl;
    
    cout<<"Calculate distance between points"<<endl;
    cout<<a.get_distance(c)<<endl;
    
    cout<<"Get symmetry point"<<endl;
    a.get_symmetry_point().display_point();
    
    cout<<"Get perimeter of triangle"<<endl;
    cout<<a.get_triangle_perimeter(b, c);
    
    cout<<"Get area of triangle"<<endl;
    cout<<a.get_triangle_area(b, c);
    return 0;
}
