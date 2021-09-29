//
//  class_member.hpp
//  student_management
//
//  Created by Macintosh HD on 28/09/2021.
//

#ifndef class_member_hpp
#define class_member_hpp

#include <iostream>
#include "student.hpp"
using namespace std;
const int MAX_SIZE = 50;
struct class_member{
    int number_of_member=0;
    student student_list[MAX_SIZE];
    bool is_null=true;
};

typedef class_member cm;

void set_student_list(cm &);
void output_student_list(cm);
void output_poor_status_student(cm);

int count_average_status_student(cm);
int count_excellent_scholarship(cm);
float get_average_score_of_very_good_status_student(cm);
string check_poor_status_student(cm);
void sort_student_list_by_scholar(cm &);

void search_student(cm);
void search_student_by_id(cm);
void search_student_by_name(cm);
void search_student_by_avg_score(cm);
void search_student_by_scholarship(cm);


#endif /* class_member_hpp */
