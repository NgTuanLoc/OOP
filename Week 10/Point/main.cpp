//
//  main.cpp
//  Point
//
//  Created by Macintosh HD on 04/12/2021.
//

#include <iostream>
#include "point_2d.hpp"
#include "point_3d.hpp"

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
    return 0;
}
