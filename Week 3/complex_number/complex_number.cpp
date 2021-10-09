//
//  complex_number.cpp
//  complex_number
//
//  Created by Macintosh HD on 08/10/2021.
//

#include "complex_number.hpp"
complex::complex(){
    real = 1;
    img = 1;
    is_null = true;
}

complex::complex(double _real, double _img){
    real = _real;
    img = _img;
    is_null = false;
}

bool complex::is_null_check(){
    return is_null ? true: false;
}

bool complex::is_zero_check()(){
    return real*img==0 ? true: false;
}

void complex::set_complex_number(){
    cout<<"Enter real element of complex number: ";
    cin>>real;
    cout<<"Enter imaginary element of complex number: ";
    cin>>img;
    is_null =false;
}

void complex::display_complex_number(){
    if(img == -1){
        cout<<" Complex number: "<<real<<"-i"<<endl;
    } else if(img == 1){
        cout<<" Complex number: "<<real<<img<<"+i"<<endl;
    } else if(img == 0){
        cout<<" Complex number: "<<real<<endl;
    } else if(img>0){
        cout<<" Complex number: "<<real<<"+"<<img<<"i"<<endl;
    } else{
        cout<<" Complex number: "<<real<<img<<"i"<<endl;
    }
}

complex complex::operator+(complex _input_number){
    complex temp(real+_input_number.real, img + _input_number.img);
    return temp;
}

complex complex::operator-(complex _input_number){
    complex temp(real-_input_number.real, img - _input_number.img);
    return temp;
}

complex complex::operator*(complex _input_number){
    complex temp(real*_input_number.real - img*_input_number.img, real*_input_number.img + img*_input_number.real);
    return temp;
}

complex complex::operator/(complex _input_number){
    complex temp(real+_input_number.real, img + _input_number.img);
    return temp;
}
