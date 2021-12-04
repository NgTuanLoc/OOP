//
//  point_3d_color.cpp
//  Point
//
//  Created by Macintosh HD on 04/12/2021.
//

#include "point_3d_color.hpp"
Point_3D_Color::Point_3D_Color(double x, double y, double z, int r, int g, int b): Point_3D(x, y, z), _r(r), _g(g), _b(b){
    set_rgb(r, g, b);
}

int Point_3D_Color::get_r(){
    return _r;
}

int Point_3D_Color::get_g(){
    return _g;
}

int Point_3D_Color::get_b(){
    return _b;
}

void Point_3D_Color::set_r(double r){
    while (r<0 || r>255) {
        cout<<"Red code must be between 0 and 255";
        cin>>_r;
        cout<<endl;
    }
    _r = r;
}

void Point_3D_Color::set_g(double g){
    while (g<0 || g>255) {
        cout<<"Green code must be between 0 and 255";
        cin>>_g;
        cout<<endl;
    }
    _g = g;
}

void Point_3D_Color::set_b(double b){
    while (b<0 || b>255) {
        cout<<"Blue code must be between 0 and 255";
        cin>>_b;
        cout<<endl;
    }
    _b = b;
}

void Point_3D_Color::set_rgb(double r, double g, double b){
    set_r(r);
    set_g(g);
    set_b(b);
}

bool Point_3D_Color::is_coincide_color_check(Point_3D_Color d){
    return _r == d.get_r() && _g == d.get_g() && _b == d.get_b();
}

istream& operator>>(istream& in, Point_3D_Color& d){
    cout<<"Enter x: ";
    in>>d._x;
    cout<<"\nEnter y: ";
    in>>d._y;
    cout<<"\nEnter z: ";
    in>>d._z;
    cout<<endl;
    cout<<"Enter r: ";
    in>>d._r;
    cout<<"\nEnter g: ";
    in>>d._g;
    cout<<"\nEnter b: ";
    in>>d._b;
    cout<<endl;
    return in;
}

ostream& operator<<(ostream& out, Point_3D_Color& d){
    out<<"Point ("<<d.get_x()<<", "<<d.get_y()<<", "<<d.get_z()<<") ";
    out<<" RGB ("<<d.get_r()<<", "<<d.get_g()<<", "<<d.get_b()<<")"<<endl;
    return out;
}
