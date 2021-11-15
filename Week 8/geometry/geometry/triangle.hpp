//
//  triangle.hpp
//  geometry
//
//  Created by Macintosh HD on 15/11/2021.
//

#ifndef triangle_hpp
#define triangle_hpp

#include "point.hpp"
#include <string>

#define epsilon 0.00000000001

class Triangle{
private:
    Point _a, _b, _c;
    static int count;
public:
    Triangle();
    Triangle(Point, Point, Point);
    
    void set_a(Point);
    void set_b(Point);
    void set_c(Point);
    void set_abc(Point, Point, Point);
    
    static int get_count();
    Point get_a();
    Point get_b();
    Point get_c();
    
    bool valid_triangle();
    double get_perimeter();
    double get_area();
    string get_triangle_type();
    void move(double, double);
    
    friend istream& operator>>(istream&, Triangle&);
    friend ostream& operator<<(ostream&, Triangle);
    ~Triangle();
};

#endif /* triangle_hpp */
