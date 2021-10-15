//
//  student.hpp
//  student_management
//
//  Created by Macintosh HD on 15/10/2021.
//

#ifndef student_hpp
#define student_hpp

#include <iostream>
#include <string>
using namespace std;

class student{
private:
    string name;
    float lit_score; //literature score
    float math_score;
    bool is_null;
    
public:
    student();
    student(string, float, float);
    
    string get_name();
    float get_lit_score();
    float get_math_score();
    bool is_student_null();
    
    void set_name(string);
    void set_lit_score(float);
    void set_math_score(float);
    
    bool check_valid_score_input();
    void set();
    void display();
    
    float get_average_score(float, float);
    string get_study_status();
};

#endif /* student_hpp */
