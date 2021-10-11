//
//  point.hpp
//  Point
//
//  Created by Macintosh HD on 11/10/2021.
//

#ifndef point_hpp
#define point_hpp

#include <iostream>
#include <math.h>
using namespace std;

class point{
private:
    double x;
    double y;
public:
    point();
    point(double, double);
    void set_point();
    void display_point();
    void move();
    bool is_concided_point(point);
    double get_distance(point);
    point get_symmetry_point();
    bool check_valid_triangle(double, double, double);
    double get_triangle_perimeter(point, point);
    double get_triangle_area(point, point);
    ~point();
};
#endif /* point_hpp */
