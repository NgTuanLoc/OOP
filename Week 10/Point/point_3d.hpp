//
//  point_3d.hpp
//  Point
//
//  Created by Macintosh HD on 04/12/2021.
//

#ifndef point_3d_hpp
#define point_3d_hpp

#include "point_2d.hpp"
class Point_3D:public Point_2D{
protected:
    double _z;
public:
    Point_3D(double, double, double);
    
    double get_z();
    
    void set_z(double);
    void set_xyz(double, double, double);
    
    bool is_coincide_check(Point_3D);
    double get_distance(Point_3D);
    Point_3D get_oposite_point();
    void move(double, double, double);
    
    void input();
    void print();
    
    double get_perimeter(Point_3D, Point_3D);
    double get_area(Point_3D, Point_3D);
    
    void operator = (Point_3D);
    friend istream& operator>>(istream&, Point_3D&);
    friend ostream& operator<<(ostream&, Point_3D);
};

#endif /* point_3d_hpp */
