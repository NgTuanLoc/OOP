//
//  Draw.hpp
//  Draw
//
//  Created by Macintosh HD on 22/10/2021.
//

#ifndef Draw_hpp
#define Draw_hpp

#include <iostream>
using namespace std;
class Draw{
    int _h;
public:
    Draw();
    Draw(int);
    
    void set_h();
    int get_h();
    
    void print_asterisk(int);
    void print_tab(int);
    void print_number(int, int);
    
    void draw_1();
    void draw_2();
    void draw_3();
    void draw_4();
    
};

#endif /* Draw_hpp */
