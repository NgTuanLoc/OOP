//
//  circle.cpp
//  geometry
//
//  Created by Macintosh HD on 15/11/2021.
//

#include "circle.hpp"

int Circle::count=0;

Circle::Circle(){
    _r = 1;
    count++;
}

Circle::Circle(Point a, double r):_o(a){
    _r = r;
    if (!valid_Circle()) {
        cout<<"Invalid input"<<endl;
        cin>>*this;
    }
}

void Circle::set_o(Point o){
    _o = o;
}

void Circle::set_r(double r){
    _r = r;
}

void Circle::set_o_r(Point o, double r){
    _o = o;
    _r = r;
}

Point Circle::get_o(){
    return _o;
}

Point Circle::get_r(){
    return _r;
}

int Circle::get_count(){
    return count;
}

bool Circle::valid_Circle(){
    return _r>0 ? true: false;
}

double Circle::get_perimeter(){
    return 2*pi*_r;
}

double Circle::get_area(){
    return pi*_r*_r;
}

string Circle::get_Circle_type(){
    string result = "Circle";
    return result;
}

void Circle::move(double x,double y){
    _o.move(x, y);
}

Circle::~Circle(){
    count--;
}

istream& operator>>(istream& in, Circle& target){
    do{
        in>>target._o;
        in>>target._r;
    }while(target.valid_Circle());
    return in;
}

ostream& operator<<(ostream& out, Circle target){
    out<<"Circle ("<<target.get_o()<<", "<<target.get_r()<<")"<<endl;
    return out;
}
