//
//  linear_equation.hpp
//  linear_equation
//
//  Created by Macintosh HD on 12/10/2021.
//

#ifndef linear_equation_hpp
#define linear_equation_hpp

#include <iostream>
using namespace std;

class linear_equation{
private:
    double a;
    double b;
public:
    linear_equation();
    linear_equation(double);
    linear_equation(double, double);
    
    void set();
    double solve();
    void display_result();
    ~linear_equation();
};

#endif /* linear_equation_hpp */
