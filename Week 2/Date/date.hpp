//
//  date.hpp
//  Date
//
//  Created by Macintosh HD on 27/09/2021.
//

#ifndef date_hpp
#define date_hpp

#include <iostream>
using namespace std;

struct date{
    int dd;
    int mm;
    int yyyy;
    bool is_null = true;
};

void set_date(date &);
void output_date(date);

int get_last_day(date);
bool check_valid_date(date);
date get_next_date(date);

#endif /* date_hpp */
