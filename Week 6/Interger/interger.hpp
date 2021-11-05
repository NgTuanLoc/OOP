//
//  interger.hpp
//  Interger
//
//  Created by Macintosh HD on 05/11/2021.
//

#ifndef interger_hpp
#define interger_hpp

#include <iostream>
using namespace std;

class interger
{
private:
    float n;
public:
    interger();
    interger(float);
    
    friend ostream &operator<<(ostream &out,const interger&);
    friend istream &operator>>(istream &in,interger&);
    
    void operator=(interger);
    
    interger operator+(const interger&);
    interger operator-(const interger&);
    interger operator*(const interger&);
    interger operator/(const interger&);
    
    void operator++();
    void operator--();
    
    bool operator ==(interger);
    bool operator !=(interger);
    bool operator >=(interger);
    bool operator <=(interger);
    bool operator >(interger);
    bool operator <(interger);
};

#endif /* interger_hpp */
