//
//  point_color.hpp
//  Point
//
//  Created by Macintosh HD on 04/12/2021.
//

#ifndef point_color_hpp
#define point_color_hpp

#include "color.hpp"
#include "point_2d.hpp"
class Point_Color: public Color, public Point_2D{
public:
    Point_Color(double, double, int, int, int);
    void input();
    void print();
    
    friend istream& operator>>(istream&, Point_Color&);
    friend ostream& operator<<(ostream&, Point_Color);
};

#endif /* point_color_hpp */
