//
//  point.cpp
//  geometry
//
//  Created by Macintosh HD on 15/11/2021.
//

#include "point.hpp"

int Point::count=0;

Point::Point(){
    _x = 0;
    _y = 0;
    count++;
}

Point::Point(double x){
    set_xy(x, 0);
    count++;
}

Point::Point(double x, double y){
    set_xy(x, y);
    count++;
}

void Point::operator=(Point a){
    set_xy(a.get_x(), a.get_y());
}

void Point::set_x(double x){
    _x = x;
}

void Point::set_y(double y){
    _y = y;
}

void Point::set_xy(double x, double y){
    _x = x;
    _y = y;
}

double Point::get_x(){
    return _x;
}

double Point::get_y(){
    return _y;
}

int Point::get_count(){
    return count;
}

bool Point::is_coincide_check(Point a){
    if (_x == a.get_x() && _y == a.get_y()) {
        return true;
    }
    return false;
}

double Point::get_distance(Point a){
    return sqrt(pow((_x-a.get_x()), 2)+pow((_y-a.get_y()), 2));
}

Point Point::get_oposite_point(){
    Point oposite_point(-this->_x, -this->_y);
    return oposite_point;
}

void Point::move(double x, double y){
    set_x(this->_x+x);
    set_y(this->_y+y);
}

Point::~Point(){
    count--;
}

istream& operator>>(istream& in,Point& a){
    cout<<"Enter x: ";
    in>>a._x;
    cout<<"\nEnter y: ";
    in>>a._y;
    cout<<endl;
    return in;
}

ostream& operator<<(ostream& out, Point a){
    out<<"Point ("<<a.get_x()<<", "<<a.get_y()<<") ";
    return out;
}
