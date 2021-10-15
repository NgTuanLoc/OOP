//
//  triangle.cpp
//  triangle
//
//  Created by Macintosh HD on 13/10/2021.
//

#include "triangle.hpp"
triangle::triangle(){
    a = 1;
    b = 1;
    c = 1;
}

triangle::triangle(double a_input, double b_input, double c_input){
    this->a = a_input;
    this->b = b_input;
    this->c = c_input;
    
    while (!check_valid_input()) {
        set();
    }
}

void triangle::set(){
    do{
        cout<<"Input a: ";
        cin>>a;
        cout<<"\nInput b: ";
        cin>>b;
        cout<<"\nInput c: ";
        cin>>c;
        cout<<endl;
    } while(!check_valid_input());
}

double triangle::get_a(){
    return a;
}

double triangle::get_b(){
    return b;
}

double triangle::get_c(){
    return c;
}

void triangle::set_a(double a){
    this->a = a;
    while (!check_valid_input()) {
        cout<<"Enter a :";
        cin>>a;
        cout<<endl;
    }
}

void triangle::set_b(double b)
{
    this->b = b;
    while (!check_valid_input()) {
        cout<<"Enter b :";
        cin>>b;
        cout<<endl;
    }
}

void triangle::set_c(double c){
    this->c = c;
    while (!check_valid_input()) {
        cout<<"Enter c :";
        cin>>c;
        cout<<endl;
    }
}

bool triangle::check_valid_input(){
    if (a<=0 || b<=0 || c<=0) {
        cout<<"Invalid input"<<endl;
        return false;
    }
    return true;
}


void triangle::display(){
    cout<<"Triangel: ("<<a<<", "<<b<<", "<<c<<")"<<endl;
}

bool triangle::check_valid_triangle(){
    if (a+b<c || b+c<a || c+a<b) {
        cout<<"\nInvalid triangle"<<endl;
        return false;
    }
    return true;
}

double triangle::get_triangle_perimeter(){
    if (check_valid_triangle()) {
        return a+b+c;
    }
    return -1;
}

double triangle::get_triangle_area(){
    if (check_valid_triangle()) {
        double p = (a+b+c)/2;
        return p*(p-a)*(p-b)*(p-c);
    }
    return -1;
}

string triangle::classify_triangle(){
    string result;
    if (!check_valid_triangle()) {
        result = "Invalid Triangle";
    } else if(a==b && b==c){
        result = "Equilateral Triangle";
    } else if(a==b || b==c || a==c){
        if ((a*a+b*b-c*c < epsilon) || (a*a-b*b+c*c < epsilon)||(-a*a+b*b+c*c < epsilon)) {
            result = "Isosceles right triangle";
        } else{
            result = "Isosceles triangle";
        }
    } else if((a*a+b*b-c*c < epsilon) || (a*a-b*b+c*c < epsilon)||(-a*a+b*b+c*c < epsilon)){
        result = "Right triangle";
    } else{
        result = "Regular triangle";
    }
    return result;
}
