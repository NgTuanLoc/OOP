//
//  fraction.hpp
//  fraction
//
//  Created by Macintosh HD on 05/11/2021.
//

#ifndef fraction_hpp
#define fraction_hpp

#include <iostream>
#include <math.h>
using namespace std;

class fraction{
private:
    double num;
    double den;
    bool is_null;
public:
    fraction();
    fraction(double , double);


    bool is_null_check();
    bool is_zero_check();
    int gcd(int, int);
    void reduce_fraction();

    fraction operator +(fraction );
    fraction operator -(fraction );
    fraction operator *(fraction );
    fraction operator /(fraction );

    bool operator ==(fraction);
    bool operator !=(fraction);
    bool operator >=(fraction);
    bool operator <=(fraction);
    bool operator >(fraction);
    bool operator <(fraction);

    friend istream &operator >>(istream &, fraction&);
    friend ostream &operator <<(ostream &, fraction);


};


#endif /* fraction_hpp */
