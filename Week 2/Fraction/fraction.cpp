//
//  fraction.cpp
//  Fraction
//
//  Created by Macintosh HD on 27/09/2021.
//

#include "fraction.hpp"

void set_fraction(fraction &f){
    cout<<"Enter numerator: ";
    cin>>f.num;
    do{
        cout<<"\nEnter denominator: ";
        cin>>f.den;
        cout<<endl;
        f.is_null = false;
    } while(!is_valid(f));
    
}

void output_fraction(fraction f){
    if(f.den<0){
        f.num = -f.num;
        f.den = -f.den;
    }
    if (f.num == 0 || f.den == 1) {
        cout<<"Your fraction is: "<<f.num<<endl;
    } else{
        cout<<"Your fraction is: "<<f.num<<"/"<<f.den<<endl;
    }
}

int get_gcd(int a, int b){
    if(a*b==0) return 1;
    
    while (a != b) {
        if (a>b) {
            a -= b;
        } else{
            b -= a;
        }
    }
    return a;
}

void reduce_fraction(fraction &f){
    int gcd = get_gcd(abs(f.num), abs(f.den));
    f.num /= gcd;
    f.den /= gcd;
}

bool is_valid(fraction f){
    if(f.den == 0){
        cout<<"Denominator must be not Equal to 0 !"<<endl;
        return false;
    }
    return true;
}

// COMPUTATION
fraction add_fraction(fraction f1, fraction f2){
    fraction sum;
    sum.num = f1.num*f2.den + f2.num*f1.den;
    sum.den = f1.den*f2.den;
    return sum;
}
fraction sub_fraction(fraction f1, fraction f2){
    fraction sub;
    sub.num = f1.num*f2.den - f2.num*f1.den;
    sub.den = f1.den*f2.den;
    return sub;
}
fraction mul_fraction(fraction f1, fraction f2){
    fraction mul;
    mul.num = f1.num*f2.num ;
    mul.den = f1.den*f2.den;
    reduce_fraction(mul);
    return mul;
}
fraction div_fraction(fraction f1, fraction f2){
    fraction div;
    div.num = f1.num*f2.den;
    div.den = f1.den*f2.num;
    reduce_fraction(div);
    return div;
}
