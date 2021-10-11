//
//  point.cpp
//  Point
//
//  Created by Macintosh HD on 11/10/2021.
//

#include "point.hpp"

point::point(){
    this->x = 0;
    this->y = 0;
}

point::point(double x, double y){
    this->x = x;
    this->y = y;
}

point::~point(){
    
}

void point::set_point(){
    cout<<"Enter x: ";
    cin>>x;
    cout<<"\nEnter y: ";
    cin>>y;
}

void point::display_point(){
    cout<<"\nDisplay point: ("<<x<<", "<<y<<")"<<endl;
}

void point::move(){
    x += 1;
    y += 1;
}

bool point::is_concided_point(point target_point){
    if(x==target_point.x && y==target_point.y){
        return true;
    }
    return false;
}

double point::get_distance(point a){
    return sqrt(pow(x-a.x, 2)+pow(y-a.y, 2));
}

point point::get_symmetry_point(){
    return point(-x, -y);
}

bool point::check_valid_triangle(double a, double b, double c){
    return a>0 && b>0 && c>0 && a+b>c &&  a+c>b && b+c>a;
}

double point::get_triangle_perimeter(point a, point b){
    double distance_a =this->get_distance(a);
    double distance_b =a.get_distance(b);
    double distance_c =this->get_distance(b);
    
    if(check_valid_triangle(distance_a, distance_b, distance_c)) return  0;
    return distance_a+distance_b+distance_c;
}

double point::get_triangle_area(point a, point b){
    double distance_a =this->get_distance(a);
    double distance_b =a.get_distance(b);
    double distance_c =this->get_distance(b);
    
    if(check_valid_triangle(distance_a, distance_b, distance_c)) return  0;
    
    double p = (distance_a+distance_b+distance_c)/2;
    return p*(p-distance_a)*(p-distance_b)*(p-distance_c);
}
