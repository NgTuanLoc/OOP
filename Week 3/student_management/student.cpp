//
//  student.cpp
//  student_management
//
//  Created by Macintosh HD on 15/10/2021.
//

#include "student.hpp"

student::student(){
    name = "NULL";
    lit_score = 0;
    math_score = 0;
    is_null = true;
}

student::student(string name, float lit_score, float math_score){
    this->set_name(name);
    this->set_lit_score(lit_score);
    this->set_math_score(math_score);
    this->is_null = false;
}

void student::set_name(string name){
    this->name = name;
}

void student::set_lit_score(float lit_score){
    this->lit_score = lit_score;
    if(!check_valid_score_input()){
        cout<<"Enter literature score: ";
        cin>>lit_score;
        cout<<endl;
    }
}

void student::set_math_score(float math_score){
    this->math_score = math_score;
    if (!check_valid_score_input()) {
        cout<<"Enter math score: "<<endl;
        cin>>math_score;
        cout<<endl;
    }
}

string student::get_name(){
    return name;
}

float student::get_lit_score(){
    return lit_score;
}

float student::get_math_score(){
    return math_score;
}

bool student::is_student_null(){
    return is_null;
}

bool student::check_valid_score_input(){
    if (lit_score<0 || lit_score>10 || math_score<0 || math_score>10) {
        cout<<"Invalid input !!!"<<endl;
        return false;
    }
    return true;
}

void student::set(){
    do{
        cin.ignore();
        cout<<"Input student's name: ";
        getline(cin, name);
        cout<<"\nInput student's literature score: ";
        cin>>lit_score;
        cout<<"\nInput student's math score: ";
        cin>>math_score;
        cout<<endl;
    } while(!check_valid_score_input());
    is_null = false;
}

float student::get_average_score(float math_score, float lit_score){
    return (math_score+lit_score)/2;
}

string student::get_study_status(){
    float avg_score = get_average_score(math_score, lit_score);
    string status = "NULL";
    if (9<=avg_score && 10>=avg_score) {
        status = "Excellent";
    } else if (8<=avg_score && 9>=avg_score){
        status = "Very good";
    } else if(7<=avg_score && 8>=avg_score){
        status = "good";
    } else if(5<=avg_score && 7>=avg_score){
        status = "Average";
    } else{
        status = "Weak";
    }
    return status;
}

void student::display(){
    if (this->is_null) {
        cout<<"Studnet info is empty"<<endl;
    }
    cout<<"Student's name: "<<this->name<<endl;
    cout<<"Student's literature score: "<<this->lit_score<<endl;
    cout<<"Student's math score: "<<this->math_score<<endl;
    cout<<"Student's average score: "<<this->get_average_score(math_score, lit_score)<<endl;
    cout<<"Student's study status: "<<this->get_study_status()<<endl;
}
