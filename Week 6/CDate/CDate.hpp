//
//  CDate.hpp
//  CDate
//
//  Created by Macintosh HD on 05/11/2021.
//

#ifndef CDate_hpp
#define CDate_hpp

#include <iostream>
using namespace std;
class CDate{
    int _dd;
    int _mm;
    int _yyyy;
    bool is_null = true;
public:
    CDate();
    CDate(int, int, int);
    
    bool check_valid_date(CDate);
    int get_last_day(CDate);
    CDate get_next_date(CDate );
    CDate get_previous_date(CDate );
    
    friend istream& operator>>(istream&, CDate&);
    friend ostream& operator<<(ostream&, CDate);
    
    void operator =(CDate);
    void operator +(int);
    void operator -(int);
    void operator ++();
    void operator --();

};


#endif /* CDate_hpp */
