//
//  CTime.hpp
//  CTime
//
//  Created by Macintosh HD on 05/11/2021.
//

#ifndef CTime_hpp
#define CTime_hpp

#include <iostream>
using namespace std;
class CTime{
    int _time;
public:
    CTime();
    CTime(int);
    
    friend istream& operator>>(istream&, CTime&);
    friend ostream& operator<<(ostream&, CTime);
    
    void operator +(int);
    void operator -(int);
    void operator ++();
    void operator --();
    
};

#endif /* CTime_hpp */
