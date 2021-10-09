//
//  complex_number.hpp
//  complex_number
//
//  Created by Macintosh HD on 08/10/2021.
//

#ifndef complex_number_hpp
#define complex_number_hpp

#include <iostream>
using namespace std;

class complex{
private:
    double real;
    double img;
    bool is_null;
public:
    complex();
    complex(double , double);
    
    void set_complex_number();
    void display_complex_number();
    
    bool is_null_check();
    bool is_zero_check();
    
    complex operator +(complex );
    complex operator -(complex );
    complex operator *(complex );
    complex operator /(complex );
    
};

#endif /* complex_number_hpp */
