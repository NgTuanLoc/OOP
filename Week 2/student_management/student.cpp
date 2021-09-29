//
//  student.cpp
//  student_management
//
//  Created by Macintosh HD on 28/09/2021.
//

#include "student.hpp"

void set_student(student &st, int id){
        st.id = id;
    do{
        cin.ignore();
        cout<<"Enter student's name: ";
        getline(cin, st.name);
        cout<<"\nEnter student's math score: ";
        cin>>st.math_score;
        cout<<"\nEnter student's literature score: ";
        cin>>st.lit_score;
        cout<<endl;
    } while (!check_valid_score(st));
    set_student_status(st);
    set_student_scholar(st);    
}

void set_student_status(student &st){
    float avg_score = get_student_avg_score(st);
    if (avg_score >=9 && avg_score <=10) {
        st.status ="excellent";
    } else if(avg_score >= 8 && avg_score <=9){
        st.status = "very good";
    } else if (avg_score>=7 && avg_score<=8){
        st.status = "good";
    } else if (avg_score >= 5 && avg_score<=7){
        st.status = "average";
    } else if (avg_score < 5){
        st.status = "poor";
    }
}

void set_student_scholar(student &st){
    if(!st.status.compare("very good")){
        st.scholar="1M VND scholarship";
    } else if(!st.status.compare("excellent")){
        st.scholar = "2M VND scholarship";
    } else {
        st.scholar = "null";
    }
}

void output_student(student st){
    cout<<st.id<<setw(width) << setfill(separator)<<setw(width) << setfill(separator)<<st.name<<setw(width) << setfill(separator)<<setw(width) << setfill(separator)<<st.math_score<<setw(width) << setfill(separator)<<st.lit_score<<setw(width) << setfill(separator)<<st.status<<setw(width) << setfill(separator)<<st.scholar<<endl;
}

float get_student_avg_score(student st){
    return (st.math_score + st.lit_score)/2;
}

bool check_valid_score(student st){
    if (st.math_score <0 || st.math_score >10)
    {
        cout<<"Invalid math score !"<<endl;
        return false;
    }    
    if (st.lit_score <0 || st.lit_score >10)
    {
        cout<<"Invalid literature score !"<<endl;
        return false;
    }    
    return true;
}
