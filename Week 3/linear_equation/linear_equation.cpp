//
//  linear_equation.cpp
//  linear_equation
//
//  Created by Macintosh HD on 12/10/2021.
//

#include "linear_equation.hpp"
linear_equation::linear_equation(){
    a = 0;
    b = 0;
}

linear_equation::linear_equation(double b){
    this->a = 0;
    this->b = b;
}

linear_equation::linear_equation(double a, double b){
    this->a = a;
    this->b = b;
}

void linear_equation::set(){
    cout<<"Input a: ";
    cin>>a;
    cout<<"\nInput b: ";
    cin>>b;
    cout<<endl;
}

double linear_equation::solve(){
    if(a==0){
        return NULL;
    } else{
        return -b/a;
    }
}

void linear_equation::display_result(){
    if (a!=0) {
        cout<<"Result x = "<<this->solve()<<endl;
    }  else{
        cout<<"x = ∞"<<endl;
    }
}

linear_equation::~linear_equation(){
    
}
