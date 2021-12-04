//
//  point_2d.hpp
//  Point
//
//  Created by Macintosh HD on 04/12/2021.
//

#ifndef point_2d_hpp
#define point_2d_hpp

#include <iostream>
#include <math.h>
using namespace std;

class Point_2D{
private:
    double _x;
    double _y;
    static int count;
public:
    Point_2D();
    Point_2D(double);
    Point_2D(double, double);
    ~Point_2D();
    
    void set_x(double);
    void set_y(double);
    void set_xy(double, double);
    
    double get_x();
    double get_y();
    static int get_count();
        
    bool is_coincide_check(Point_2D);
    double get_distance(Point_2D);
    Point_2D get_oposite_point();
    void move(double, double);
    void operator = (Point_2D);
    
    friend istream& operator>>(istream&, Point_2D&);
    friend ostream& operator<<(ostream&, Point_2D);
};


#endif /* point_2d_hpp */
