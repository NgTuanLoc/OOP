//
//  main.cpp
//  Point
//
//  Created by Macintosh HD on 04/12/2021.
//

#include <iostream>
#include "point_2d.hpp"
#include "point_3d.hpp"
#include "point_3d_color.hpp"
#include "point_color.hpp"
#include "point_color_3d.hpp"

int main(int argc, const char * argv[]) {
    Point_2D a(2, 3);
    Point_2D b(4, 2);
    Point_2D c(3,1);
    double test = a.get_perimeter(b, c);
    cout<<test<<endl;
    
    Point_3D x(2, 3, 1);
    Point_3D y(4, 2, -2);
    Point_3D z(3, 1, -3);
    double test1 = x.get_area(y, z);
    cout<<test1<<endl;
    
    Point_3D_Color m(2, 3, 1, 23, 67, 45);
    Point_3D_Color n(4, 2, -2, 23, 54, 34);
    Point_3D_Color l(3, 1, -3, 23, 67, 45);
    bool test2 = m.is_coincide_color_check(n);
    cout<<test2<<endl;
    
    Point_Color q(2, 3, 23, 67, 45);
    Point_Color p(4, 2, 23, 54, 34);
    Point_Color j(3, 1, 23, 67, 45);
    bool test3 = q.is_coincide_color_check(p);
    cout<<test3<<endl;
    cout<<q;
    
    Point_Color_3D t(2, 3, -4, 23, 67, 45);
    Point_Color_3D o(4, 2, -1, 23, 54, 34);
    Point_Color_3D u(3, 1, 5, 23, 67, 45);
    bool test4 = u.is_coincide_color_check(t);
    cout<<test4<<endl;
    cout<<u;
    return 0;
}
