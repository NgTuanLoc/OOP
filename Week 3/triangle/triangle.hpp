//
//  triangle.hpp
//  triangle
//
//  Created by Macintosh HD on 13/10/2021.
//

#ifndef triangle_hpp
#define triangle_hpp

#include <iostream>
#include <string>

#define epsilon 0.00000000001

using namespace std;
class triangle{
private:
    double a;
    double b;
    double c;
    
public:
    triangle();
    triangle(double, double, double);
    bool check_valid_input();
    
    void set();
    void display();
    
    double get_a();
    double get_b();
    double get_c();

    void set_a(double);
    void set_b(double);
    void set_c(double);
    
    string classify_triangle();
    bool check_valid_triangle();
    double get_triangle_perimeter();
    double get_triangle_area();
};

#endif /* triangle_hpp */
