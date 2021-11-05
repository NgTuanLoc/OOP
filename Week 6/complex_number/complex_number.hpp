//
//  complex_number.hpp
//  complex_number
//
//  Created by Macintosh HD on 04/11/2021.
//

#ifndef complex_number_hpp
#define complex_number_hpp

#include <iostream>
#include <math.h>
using namespace std;

class complex{
private:
    double real;
    double img;
    bool is_null;
public:
    complex();
    complex(double , double);
    
    
    bool is_null_check();
    bool is_zero_check();
    float get_modulus();
    
    complex operator +(complex );
    complex operator -(complex );
    complex operator *(complex );
    complex operator /(complex );
    
    bool operator ==(complex);
    bool operator !=(complex);
    bool operator >=(complex);
    bool operator <=(complex);
    bool operator >(complex);
    bool operator <(complex);
    
    friend istream &operator >>(istream &, complex&);
    friend ostream &operator <<(ostream &, complex);
    
};

#endif /* complex_number_hpp */
