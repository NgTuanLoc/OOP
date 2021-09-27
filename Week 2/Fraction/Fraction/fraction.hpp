//
//  fraction.hpp
//  Fraction
//
//  Created by Macintosh HD on 27/09/2021.
//

#ifndef fraction_hpp
#define fraction_hpp

#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;
// Fragtion = numerator/ denominator

struct fraction{
    int num; // numerator
    int den; // denominator
    bool is_null = true;
};

void set_fraction(fraction &);
void output_fraction(fraction);
void reduce_fraction(fraction &);
int get_gcd(int, int);
bool is_valid(fraction);

fraction add_fraction(fraction, fraction);
fraction sub_fraction(fraction, fraction);
fraction mul_fraction(fraction, fraction);
fraction div_fraction(fraction, fraction);

#endif /* fraction_hpp */
