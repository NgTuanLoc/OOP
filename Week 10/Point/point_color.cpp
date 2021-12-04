//
//  point_color.cpp
//  Point
//
//  Created by Macintosh HD on 04/12/2021.
//

#include "point_color.hpp"

Point_Color::Point_Color(double x, double y , int r, int g, int b): Point_2D(x, y), Color(r, g, b){
}

void Point_Color::input(){
    Point_2D::input();
    Color::input();
}

void Point_Color::print(){
    Point_2D::print();
    Color::print();
}

istream& operator>>(istream& in, Point_Color& d){
    d.input();
    return in;
}
ostream& operator<<(ostream& out, Point_Color d){
    d.print();
    return out;
}

