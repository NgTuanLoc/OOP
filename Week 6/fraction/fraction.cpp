//
//  fraction.cpp
//  fraction
//
//  Created by Macintosh HD on 05/11/2021.
//

#include "fraction.hpp"
fraction::fraction(){
    num = 1;
    den = 1;
    is_null = true;
}

fraction::fraction(double _num, double _den){
    num = _num;
    den = _den;
    is_null = false;
}

bool fraction::is_null_check(){
    return is_null ? true: false;
}

bool fraction::is_zero_check(){
    return num*den==0 ? true: false;
}

int fraction::gcd(int a, int b){
    a = a<0 ? -a: a;
    b = b<0 ? -b: b;

    if(a*b==0) return 1;

    while(a!=b && a*b!=0){
      if(a>b){
        a -= b;
      } else{
        b -= a;
      }
    }
    return a;
}

void fraction::reduce_fraction(){
    int temp = gcd(num, den);
    if(den < 0){
      num = -num/temp;
      den = -den/temp;
    } else{
      num = num/temp;
      den = den/temp;
    }
}

istream& operator>>(istream &input, fraction &input_fraction){
    cout<<"Enter numerator element of fraction : ";
    input>>input_fraction.num;
    cout<<"Enter denominator element of fraction : ";
    input>>input_fraction.den;
    input_fraction.is_null=false;
    return input;
}

ostream& operator<<(ostream &output, fraction input_fraction){
    input_fraction.reduce_fraction();
    if(input_fraction.den == 1 || input_fraction.num == 0){
      output<<"Your fraction is: "<<input_fraction.num<<endl;
    } else{
      output<<"Your fraction is: "<<input_fraction.num<<"/"<<input_fraction.den<<endl;
    }
    return output;
}

fraction fraction::operator+(fraction input_fraction){
    fraction temp(num*input_fraction.den + den*input_fraction.num, den*input_fraction.den);
    return temp;
}

fraction fraction::operator-(fraction input_fraction){
    fraction temp(num*input_fraction.den - den*input_fraction.num, den*input_fraction.den);
    return temp;
}

fraction fraction::operator*(fraction input_fraction){
    fraction temp(num*input_fraction.num, den*input_fraction.den);
    return temp;
}

fraction fraction::operator/(fraction input_fraction){
    fraction temp(num*input_fraction.den, den*input_fraction.num);
    return temp;
}

bool fraction::operator==(fraction input_fraction){
    this->reduce_fraction();
    input_fraction.reduce_fraction();
    if (num==input_fraction.num&&den==input_fraction.den) {
        return true;
    }
    return false;
}

bool fraction::operator!=(fraction input_fraction){
    this->reduce_fraction();
    input_fraction.reduce_fraction();
    if (num==input_fraction.num&&den==input_fraction.den) {
        return false;
    }
    return true;
}

bool fraction::operator>=(fraction input_fraction){
    this->reduce_fraction();
    input_fraction.reduce_fraction();
    if (num*input_fraction.den - den*input_fraction.num>=0) {
        return true;
    }
    return false;
}

bool fraction::operator>(fraction input_fraction){
    this->reduce_fraction();
    input_fraction.reduce_fraction();
    if (num*input_fraction.den - den*input_fraction.num>0) {
        return true;
    }
    return false;
}

bool fraction::operator<=(fraction input_fraction){
    this->reduce_fraction();
    input_fraction.reduce_fraction();
    if (num*input_fraction.den - den*input_fraction.num<=0) {
        return true;
    }
    return false;
}

bool fraction::operator<(fraction input_fraction){
    this->reduce_fraction();
    input_fraction.reduce_fraction();
    if (num*input_fraction.den - den*input_fraction.num<0) {
        return true;
    }
    return false;
}
