//
//  number.cpp
//  gcd&lcm
//
//  Created by Macintosh HD on 22/10/2021.
//

#include "number.hpp"
number::number(){
    this->_a = 1;
    this->_b = 1;
}

number::number(int a, int b){
    this->_a = a;
    this->_b = b;
}

bool number::check_valid_input(){
    if (this->_a < 1 || this->_b<1) {
        cout<<"Invalid input"<<endl;
        return false;
    }
    return true;
}

int number::getA(){
    return this->_a;
}

int number::getB(){
    return this->_b;
}

void number::setA(int a){
    this->_a = a;
    while (this->_a <1) {
        cout<<"Input a: ";
        cin>>this->_a;
    }
    cout<<endl;
}

void number::setB(int b){
    this->_b = b;
    while (this->_b <1) {
        cout<<"Input b: ";
        cin>>this->_b;
        cout<<endl;
    }
}

void number::input(){
    do{
        cout<<"Input a: ";
        cin>>this->_a;
        cout<<endl;
        cout<<"Input b: ";
        cin>>this->_b;
        cout<<endl;
    } while(!check_valid_input());
}
 
int number::get_gcd(){
    int a = this->_a;
    int b = this->_b;
    while (a != b) {
        if(a>b){
            a -=b;
        } else{
            b -=a;
        }
    }
    return a;
}

int number::get_lcm(){
    int a = this->_a;
    int b = this->_b;
    return (a / this->get_gcd()) * b;
}

void number::output(){
    cout<<"GCD of "<<this->getA()<<" and "<<this->getB()<<" : "<<this->get_gcd()<<endl;
    cout<<"LCM of "<<this->getA()<<" and "<<this->getB()<<" : "<<this->get_lcm()<<endl;
}
