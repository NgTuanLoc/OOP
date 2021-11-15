//
//  rectangle.hpp
//  geometry
//
//  Created by Macintosh HD on 15/11/2021.
//

#ifndef rectangle_hpp
#define rectangle_hpp

#include "point.hpp"
#include <string>

#define epsilon 0.00000000001

class Rectangle{
private:
    Point _a, _b, _c, _d;
    static int count;
public:
    Rectangle();
    Rectangle(Point, Point, Point ,Point);
    
    void set_a(Point);
    void set_b(Point);
    void set_c(Point);
    void set_d(Point);
    void set_abcd(Point, Point, Point, Point);
    
    static int get_count();
    Point get_a();
    Point get_b();
    Point get_c();
    Point get_d();
    
    bool valid_Rectangle();
    double get_perimeter();
    double get_area();
    string get_Rectangle_type();
    void move(double, double);
    
    friend istream& operator>>(istream&, Rectangle&);
    friend ostream& operator<<(ostream&, Rectangle);
    ~Rectangle();
};


#endif /* rectangle_hpp */
