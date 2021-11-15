//
//  triangle.cpp
//  geometry
//
//  Created by Macintosh HD on 15/11/2021.
//

#include "triangle.hpp"

int Triangle::count=0;

Triangle::Triangle(){
    count++;
}

Triangle::Triangle(Point a, Point b, Point c):_a(a), _b(b), _c(c){
    if (!valid_triangle()) {
        cout<<"Invalid input"<<endl;
        cin>>*this;
    }
    count++;
}

void Triangle::set_a(Point a){
    _a = a;
}

void Triangle::set_b(Point b){
    _b = b;
}

void Triangle::set_c(Point c){
    _c = c;
}

void Triangle::set_abc(Point a, Point b, Point c){
    _a = a;
    _b = b;
    _c = c;
}

Point Triangle::get_a(){
    return _a;
}

Point Triangle::get_b(){
    return _b;
}

Point Triangle::get_c(){
    return _c;
}

int Triangle::get_count(){
    return count;
}

bool Triangle::valid_triangle(){
    double A = _a.get_distance(_b);
    double B = _b.get_distance(_c);
    double C = _c.get_distance(_a);
    
    return A>0 && B>0 && C>0 && A+B>C && A+C>B && B+C>A;
}

double Triangle::get_perimeter(){
    double A = _a.get_distance(_b);
    double B = _b.get_distance(_c);
    double C = _c.get_distance(_a);
    
    return A+B+C;
}

double Triangle::get_area(){
    double p = this->get_perimeter()/2;
    double A = _a.get_distance(_b);
    double B = _b.get_distance(_c);
    double C = _c.get_distance(_a);
    
    double area = sqrt(p*(p-A)*(p-B)*(p-C));
    return area;
}

string Triangle::get_triangle_type(){
    double A = _a.get_distance(_b);
    double B = _b.get_distance(_c);
    double C = _c.get_distance(_a);
    string result;
    if (!valid_triangle()) {
        return NULL;
    } else if(A==B && A==C){
        result = "Equilateral Triangle";
    } else if(A==B || B==C || A==C){
        if((A*A+B*B-C*C < epsilon) || (A*A-B*B+C*C < epsilon) || (-A*A+B*B+C*C < epsilon)) {
            result = "Isosceles right triangle";
        } else{
            result = "Isosceles triangle";
        }
    } else if((A*A+B*B-C*C < epsilon) || (A*A-B*B+C*C < epsilon)||(-A*A+B*B+C*C < epsilon)){
        result = "Right triangle";
    } else{
        result = "Regular triangle";
    }
    return result;
}

void Triangle::move(double x,double y){
    _a.move(x, y);
    _b.move(x, y);
    _c.move(x, y);
}

Triangle::~Triangle(){
    count--;
}

istream& operator>>(istream& in, Triangle& target){
    do{
        in>>target._a;
        in>>target._b;
        in>>target._c;
    }while(target.valid_triangle());
    return in;
}

ostream& operator<<(ostream& out, Triangle target){
    out<<"Triangle ("<<target.get_a()<<", "<<target.get_b()<<", "<<target.get_c()<<")"<<endl;
    return out;
}
