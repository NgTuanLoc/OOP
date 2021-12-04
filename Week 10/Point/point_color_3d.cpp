//
//  point_color_3d.cpp
//  Point
//
//  Created by Macintosh HD on 04/12/2021.
//

#include "point_color_3d.hpp"
Point_Color_3D::Point_Color_3D(double x, double y, double z , int r, int g, int b): Point_3D(x, y, z), Color(r, g, b){
}

void Point_Color_3D::input(){
    Point_3D::input();
    Color::input();
}

void Point_Color_3D::print(){
    Point_3D::print();
    Color::print();
}

istream& operator>>(istream& in, Point_Color_3D& d){
    d.input();
    return in;
}
ostream& operator<<(ostream& out, Point_Color_3D d){
    d.print();
    return out;
}

