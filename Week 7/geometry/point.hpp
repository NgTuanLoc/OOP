//
//  point.hpp
//  geometry
//
//  Created by Macintosh HD on 15/11/2021.
//

#ifndef point_hpp
#define point_hpp

#include <iostream>
#include <math.h>
using namespace std;

class Point{
private:
    double _x;
    double _y;
    static int count;
public:
    Point();
    Point(double);
    Point(double, double);
    ~Point();
    
    void set_x(double);
    void set_y(double);
    void set_xy(double, double);
    
    double get_x();
    double get_y();
    static int get_count();
        
    bool is_coincide_check(Point);
    double get_distance(Point);
    Point get_oposite_point();
    void move(double, double);
    void operator = (Point);
    
    friend istream& operator>>(istream&, Point&);
    friend ostream& operator<<(ostream&, Point);
};

#endif /* point_hpp */
