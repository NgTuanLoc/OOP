//
//  test_candidate.cpp
//  Candidate
//
//  Created by Macintosh HD on 11/10/2021.
//

#include "test_candidate.hpp"
test_candidate::test_candidate(){
    this->number_of_candidate = 1;
}

test_candidate::~test_candidate(){
    delete[] student;
}

void test_candidate::set_number_of_candidate(){
    cout<<"Input number of candidate: "<<endl;
    cin>>this->number_of_candidate;
    cout<<endl;
}

void test_candidate::set_all_of_candidate(){
    for (int i =0; i<this->number_of_candidate; i++) {
        cout<<"Fill student's information number "<<i+1<<endl;
        student[i].set_candidate(i);
    }
}

void test_candidate::show_candidate_greater_15(){
    for (int i =0; i<this->number_of_candidate; i++) {
        if (student[i].filter_candidate_by_score(15)) {
            cout<<"Student number "<<i+1<<endl;
            student[i].display_candidate();
        }
    }
}
