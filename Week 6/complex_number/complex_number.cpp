//
//  complex_number.cpp
//  complex_number
//
//  Created by Macintosh HD on 04/11/2021.
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

bool complex::is_zero_check(){
    return real*img==0 ? true: false;
}

istream& operator>>(istream &input, complex &input_complex_number){
    cout<<"Enter real element of complex number: ";
    input>>input_complex_number.real;
    cout<<"Enter imaginary element of complex number: ";
    input>>input_complex_number.img;
    input_complex_number.is_null=false;
    return input;
}

ostream& operator<<(ostream &output, complex input_complex_number){
    if(input_complex_number.img == -1){
        output<<" Complex number: "<<input_complex_number.real<<"-i"<<endl;
    } else if(input_complex_number.img == 1){
        output<<" Complex number: "<<input_complex_number.real<<input_complex_number.img<<"+i"<<endl;
    } else if(input_complex_number.img == 0){
        output<<" Complex number: "<<input_complex_number.real<<endl;
    } else if(input_complex_number.img>0){
        output<<" Complex number: "<<input_complex_number.real<<"+"<<input_complex_number.img<<"i"<<endl;
    } else{
        output<<" Complex number: "<<input_complex_number.real<<input_complex_number.img<<"i"<<endl;
    }
    return output;
}

complex complex::operator+(complex input_complex_number){
    complex temp(real+input_complex_number.real, img + input_complex_number.img);
    return temp;
}

complex complex::operator-(complex input_complex_number){
    complex temp(real-input_complex_number.real, img - input_complex_number.img);
    return temp;
}

complex complex::operator*(complex input_complex_number){
    complex temp(real*input_complex_number.real - img*input_complex_number.img, real*input_complex_number.img + img*input_complex_number.real);
    return temp;
}

complex complex::operator/(complex input_complex_number){
    complex temp(real+input_complex_number.real, img + input_complex_number.img);
    return temp;
}

bool complex::operator==(complex input_complex_number){
    if (real==input_complex_number.real && img==input_complex_number.img) {
        return true;
    }
    return false;
}

bool complex::operator!=(complex input_complex_number){
    if (real==input_complex_number.real && img==input_complex_number.img) {
        return false;
    }
    return true;
}

float complex::get_modulus(){
    return sqrt(real*real+img*img);
}

bool complex::operator>=(complex input_complex_number){
    if (this->get_modulus()>=input_complex_number.get_modulus() ) {
        return true;
    }
    return false;
}

bool complex::operator>(complex input_complex_number){
    if (this->get_modulus()>input_complex_number.get_modulus() ) {
        return true;
    }
    return false;
}

bool complex::operator<=(complex input_complex_number){
    if (this->get_modulus()<=input_complex_number.get_modulus() ) {
        return true;
    }
    return false;
}

bool complex::operator<(complex input_complex_number){
    if (this->get_modulus()<input_complex_number.get_modulus() ) {
        return true;
    }
    return false;
}
