//
//  student.hpp
//  student_management
//
//  Created by Macintosh HD on 28/09/2021.
//

#ifndef student_hpp
#define student_hpp

#include <iostream>
#include <string.h>
#include <iomanip>

using namespace std;
const char separator    = ' ';
const int width = 20;

struct student
{
    int id; 
    string name;
    float math_score;
    float lit_score;
    string status;
    string scholar; 
};

void set_student(student &, int);
void set_student_status(student &);
void set_student_scholar(student &);
void output_student(student);
float get_student_avg_score(student );
bool check_valid_score(student );

#endif /* student_hpp */
