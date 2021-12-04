//
//  color.hpp
//  Point
//
//  Created by Macintosh HD on 04/12/2021.
//

#ifndef color_hpp
#define color_hpp

#include <iostream>
using namespace std;

class Color{
protected:
    int _r, _g, _b;
public:
    Color(int, int, int);
    
    int get_r();
    int get_g();
    int get_b();
    
    void set_r(double);
    void set_g(double);
    void set_b(double);
    void set_rgb(double, double, double);
    
    void input();
    void print();
    
    bool is_coincide_color_check(Color);
    
    friend istream& operator>>(istream&, Color&);
    friend ostream& operator<<(ostream&, Color);
};


#endif /* color_hpp */
