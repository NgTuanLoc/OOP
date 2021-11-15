//
//  rectangle.cpp
//  geometry
//
//  Created by Macintosh HD on 15/11/2021.


#include "rectangle.hpp"

int Rectangle::count=0;

Rectangle::Rectangle(){
    count++;
}

Rectangle::Rectangle(Point a, Point b, Point c, Point d):_a(a), _b(b), _c(b), _d(d){
    if (!valid_rectangle()) {
        cout<<"Invalid input"<<endl;
        cin>>*this;
    }
}

void Rectangle::set_a(Point a){
    _a = a;
}

void Rectangle::set_b(Point b){
    _b = b;
}

void Rectangle::set_c(Point c){
    _c = c;
}

void Rectangle::set_d(Point d){
    _d = d;
}


void Rectangle::set_abcd(Point a, Point b, Point c, Point d){
    _a = a;
    _b = b;
    _c = c;
    _d = d;
}

Point Rectangle::get_a(){
    return _a;
}

Point Rectangle::get_b(){
    return _b;
}

Point Rectangle::get_c(){
    return _c;
}

Point Rectangle::get_d(){
    return _d;
}

int Rectangle::get_count(){
    return count;
}

bool Rectangle::valid_rectangle(){
    double center_x = (_a.get_x() + _b.get_x() + _c.get_x() + _d.get_x())/4;
    double center_y = (_a.get_y() + _b.get_y() + _c.get_y() + _d.get_y())/4;

    Point center_point(center_x, center_y);
    double dd1 = center_point.get_distance(_a);
    double dd2 = center_point.get_distance(_b);
    double dd3 = center_point.get_distance(_c);
    double dd4 = center_point.get_distance(_d);

    return dd1==dd2 && dd1==dd3 && dd1==dd4;
}

double Rectangle::get_perimeter(){
    double A = _a.get_distance(_b);
    double B = _b.get_distance(_c);

    return (A+B)*2;
}

double Rectangle::get_area(){
    double A = _a.get_distance(_b);
    double B = _b.get_distance(_c);
    return A*B;
}

string Rectangle::get_Rectangle_type(){
    double A = _a.get_distance(_b);
    double B = _b.get_distance(_c);
    string result = "Rectangle";
    if (A==B) {
        result = "square";
    }
    return result;
}

void Rectangle::move(double x,double y){
    _a.move(x, y);
    _b.move(x, y);
    _c.move(x, y);
    _d.move(x, y);
}

Rectangle::~Rectangle(){
    count--;
}

istream& operator>>(istream& in, Rectangle& target){
    do{
        in>>target._a;
        in>>target._b;
        in>>target._c;
        in>>target._d;
    }while(target.valid_rectangle());
    return in;
}

ostream& operator<<(ostream& out, Rectangle target){
    out<<"Rectangle ("<<target.get_a()<<", "<<target.get_b()<<", "<<target.get_c()<<", "<<target.get_d()<<")"<<endl;
    return out;
}
