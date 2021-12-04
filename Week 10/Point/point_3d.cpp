//
//  point_3d.cpp
//  Point
//
//  Created by Macintosh HD on 04/12/2021.
//

#include "point_3d.hpp"
Point_3D::Point_3D(double x, double y, double z): Point_2D(x, y), _z(z){
    _z = z;
}

double Point_3D::get_z(){
    return _z;
}

void Point_3D::set_z(double z){
    _z = z;
}

void Point_3D::set_xyz(double x, double y, double z){
    set_xy(x, y);
    _z = z;
}

void Point_3D::move(double dx, double dy, double dz){
    Point_2D::move(dx, dy);
    _z += dz;
}

bool Point_3D::is_coincide_check(Point_3D d){
    return Point_2D::is_coincide_check((Point_2D)d)&& d._z == _z;
}

double Point_3D::get_distance(Point_3D d){
    return sqrt(pow(_x-d._x, 2)+pow(_y-d._y, 2)+pow(_z-d._z, 2));
}

Point_3D Point_3D::get_oposite_point(){
    Point_3D d(-_x, -_y, -_z);
    return d;
}

double Point_3D::get_perimeter(Point_3D d1, Point_3D d2){
    double a = this->get_distance(d1);
    double b = d1.get_distance(d2);
    double c = d2.get_distance(*this);
    double p = a+b+c;
    return p;
}

double Point_3D::get_area(Point_3D d1, Point_3D d2){
    double a = this->get_distance(d1);
    double b = d1.get_distance(d2);
    double c = d2.get_distance(*this);
    double p = a+b+c;
    
    double area = sqrt((p/2)*(p-a)*(p-b)*(p-c));
    return area;
}

void Point_3D::input(){
    cout<<"Enter x: ";
    cin>>_x;
    cout<<"\nEnter y: ";
    cin>>_y;
    cout<<"\nEnter z: ";
    cin>>_z;
    cout<<endl;
}

void Point_3D::print(){
    cout<<"Point ("<<_x<<", "<<_y<<", "<<_z<<")";
}

istream& operator>>(istream& in, Point_3D& d){
    cout<<"Enter x: ";
    in>>d._x;
    cout<<"\nEnter y: ";
    in>>d._y;
    cout<<"\nEnter z: ";
    in>>d._z;
    cout<<endl;
    return in;
}

ostream& operator<<(ostream& out, Point_3D& d){
    out<<"Point ("<<d.get_x()<<", "<<d.get_y()<<", "<<d.get_z()<<")";
    return out;
}
