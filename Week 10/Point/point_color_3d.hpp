//
//  point_color_3d.hpp
//  Point
//
//  Created by Macintosh HD on 04/12/2021.
//

#ifndef point_color_3d_hpp
#define point_color_3d_hpp

#include "color.hpp"
#include "point_3d.hpp"
class Point_Color_3D: public Color, public Point_3D{
public:
    Point_Color_3D(double, double, double, int, int, int);
    void input();
    void print();
    
    friend istream& operator>>(istream&, Point_Color_3D&);
    friend ostream& operator<<(ostream&, Point_Color_3D);
};

#endif /* point_color_3d_hpp */
