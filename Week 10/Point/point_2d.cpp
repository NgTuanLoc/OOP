//
//  point_2d.cpp
//  Point
//
//  Created by Macintosh HD on 04/12/2021.
//

#include "point_2d.hpp"

Point_2D::Point_2D(){
    _x = 0;
    _y = 0;
}

Point_2D::Point_2D(double x){
    set_xy(x, 0);
}

Point_2D::Point_2D(double x, double y){
    set_xy(x, y);
}

void Point_2D::operator=(Point_2D a){
    set_xy(a.get_x(), a.get_y());
}

void Point_2D::set_x(double x){
    _x = x;
}

void Point_2D::set_y(double y){
    _y = y;
}

void Point_2D::set_xy(double x, double y){
    _x = x;
    _y = y;
}

double Point_2D::get_x(){
    return _x;
}

double Point_2D::get_y(){
    return _y;
}

bool Point_2D::is_coincide_check(Point_2D a){
    if (_x == a.get_x() && _y == a.get_y()) {
        return true;
    }
    return false;
}

double Point_2D::get_distance(Point_2D a){
    return sqrt(pow((_x-a.get_x()), 2)+pow((_y-a.get_y()), 2));
}

Point_2D Point_2D::get_oposite_point(){
    Point_2D oposite_point(-this->_x, -this->_y);
    return oposite_point;
}

void Point_2D::move(double x, double y){
    set_x(this->_x+x);
    set_y(this->_y+y);
}

double Point_2D::get_perimeter(Point_2D d1, Point_2D d2){
    double a = this->get_distance(d1);
    double b = d1.get_distance(d2);
    double c = d2.get_distance(*this);
    double p = a+b+c;
    return p;
}

double Point_2D::get_area(Point_2D d1, Point_2D d2){
    double a = this->get_distance(d1);
    double b = d1.get_distance(d2);
    double c = d2.get_distance(*this);
    double p = a+b+c;
    
    double area = sqrt((p/2)*(p-a)*(p-b)*(p-c));
    return area;
}

Point_2D::~Point_2D(){
}

void Point_2D::input(){
    cout<<"Enter x: ";
    cin>>_x;
    cout<<"\nEnter y: ";
    cin>>_y;
    cout<<endl;
}
void Point_2D::print(){
    cout<<"Point ("<<_x<<", "<<_y<<") ";
}

istream& operator>>(istream& in,Point_2D& a){
    cout<<"Enter x: ";
    in>>a._x;
    cout<<"\nEnter y: ";
    in>>a._y;
    cout<<endl;
    return in;
}

ostream& operator<<(ostream& out, Point_2D a){
    out<<"Point ("<<a.get_x()<<", "<<a.get_y()<<") ";
    return out;
}
