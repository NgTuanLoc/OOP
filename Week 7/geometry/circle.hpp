//
//  circle.hpp
//  geometry
//
//  Created by Macintosh HD on 15/11/2021.
//

#ifndef circle_hpp
#define circle_hpp

#include "point.hpp"
#include <string>

#define pi 3.14

class Circle{
private:
    Point _o;
    double _r;
    static int count;
public:
    Circle();
    Circle(Point, double);
    
    void set_o(Point);
    void set_r(double);
    
    void set_o_r(Point, double);
    
    static int get_count();
    Point get_o();
    Point get_r();
    
    
    bool valid_Circle();
    double get_perimeter();
    double get_area();
    string get_Circle_type();
    void move(double, double);
    
    friend istream& operator>>(istream&, Circle&);
    friend ostream& operator<<(ostream&, Circle);
    ~Circle();
};


#endif /* circle_hpp */
