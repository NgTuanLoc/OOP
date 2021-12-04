//
//  point_3d_color.hpp
//  Point
//
//  Created by Macintosh HD on 04/12/2021.
//

#ifndef point_3d_color_hpp
#define point_3d_color_hpp

#include "point_3d.hpp"
class Point_3D_Color: public Point_3D{
protected:
    int _r, _g, _b; // 0-255
public:
    Point_3D_Color(double, double, double , int, int, int);
    
    int get_r();
    int get_g();
    int get_b();
    
    void set_r(double);
    void set_g(double);
    void set_b(double);
    void set_rgb(double, double, double);
    
    bool is_coincide_color_check(Point_3D_Color);
    
    friend istream& operator>>(istream&, Point_3D_Color&);
    friend ostream& operator<<(ostream&, Point_3D_Color);
};

#endif /* point_3d_color_hpp */
