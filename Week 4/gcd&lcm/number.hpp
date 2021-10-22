//
//  number.hpp
//  gcd&lcm
//
//  Created by Macintosh HD on 22/10/2021.
//

#ifndef number_hpp
#define number_hpp

#include <iostream>
using namespace std;
class number{
    int _a;
    int _b;
public:
    number();
    number(int, int);
    
    bool check_valid_input();
    int getA();
    int getB();
    void setA(int);
    void setB(int);
    
    void input();
    void output();
    
    int get_gcd();
    int get_lcm();
};

#endif /* number_hpp */
