//
//  color.cpp
//  Point
//
//  Created by Macintosh HD on 04/12/2021.
//

#include "color.hpp"
Color::Color(int r, int g, int b){
    set_rgb(r, g, b);
}

int Color::get_r(){
    return _r;
}

int Color::get_g(){
    return _g;
}

int Color::get_b(){
    return _b;
}

void Color::set_r(double r){
    while (r<0 || r>255) {
        cout<<"Red code must be between 0 and 255";
        cin>>_r;
        cout<<endl;
    }
    _r = r;
}

void Color::set_g(double g){
    while (g<0 || g>255) {
        cout<<"Green code must be between 0 and 255";
        cin>>_g;
        cout<<endl;
    }
    _g = g;
}

void Color::set_b(double b){
    while (b<0 || b>255) {
        cout<<"Blue code must be between 0 and 255";
        cin>>_b;
        cout<<endl;
    }
    _b = b;
}

void Color::set_rgb(double r, double g, double b){
    set_r(r);
    set_g(g);
    set_b(b);
}

void Color::input(){
    do{
        cout<<"Enter RGB from 0 to 255: ";
        cin>>_r>>_g>>_b;
    }while(_r<0 || _r>255 || _g<0 || _g>255 || _b<0 || _b>255);
}
void Color::print(){
    cout<<" RGB ("<<_r<<", "<<_g<<", "<<_b<<")"<<endl;
}

bool Color::is_coincide_color_check(Color d){
    return _r == d.get_r() && _g == d.get_g() && _b == d.get_b();
}

istream& operator>>(istream& in, Color& d){
    d.input();
    return in;
}
ostream& operator<<(ostream& out, Color d){
    d.print();
    return out;
}
