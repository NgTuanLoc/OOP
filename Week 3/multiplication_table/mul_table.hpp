//
//  mul_table.hpp
//  multiplication_table
//
//  Created by Macintosh HD on 12/10/2021.
//

#ifndef mul_table_hpp
#define mul_table_hpp

#include <iostream>
#include <iomanip>
const int max_width = 3;
using namespace std;

class mul_table{
private:
    int m;
    int n;
public:
    mul_table();
    mul_table(int);
    mul_table(int, int);
    
    bool check_input(int , int);
    void set();
    void display();
    void show_table_from_m();
    void show_table_from_m_to_n();
    void show_all_table();
};

#endif /* mul_table_hpp */
