//
//  candidate.cpp
//  Candidate
//
//  Created by Macintosh HD on 09/10/2021.
//

#include "candidate.hpp"

candidate::candidate(){
    id = -1;
    name = "null";
    date_of_birth = "null";
    math_score = 0;
    lit_score = 0;
    eng_score = 0;
    is_valid = false;
}

bool candidate::check_valid_score(float score){
    return (score<0||score>10) ? false: true;
}

void candidate::set_candidate(int _id){
    this->id = _id;
    cin.ignore();
    cout<<"Input name: ";
    getline(cin, this->name);
    cout<<"\nInput date of birth: ";
    getline(cin, this->date_of_birth);
    do{
        cout<<"\nInput math score: ";
        cin>>math_score;
        if (!check_valid_score(math_score)) {
            cout<<"Invalid math score"<<endl;
            continue;
        }
        cout<<"\nInput liturature score: ";
        cin>>lit_score;
        if (!check_valid_score(lit_score)) {
            cout<<"Invalid liturature score"<<endl;
            continue;
        }
        cout<<"\nInput english score: ";
        cin>>eng_score;
        if (!check_valid_score(eng_score)) {
            cout<<"Invalid english score"<<endl;
            continue;
        }
        is_valid = true;
    }while(!is_valid);
}

void candidate::display_candidate(){
    cout<<id<<setw(width) << setfill(separator)<<name<<setw(width) << setfill(separator)<<date_of_birth<<setw(width) << setfill(separator)<<math_score<<setw(width) << setfill(separator)<<lit_score<<setw(width) << setfill(separator)<<eng_score<<endl;
}

bool candidate::filter_candidate_by_score(int score){
    int sum = this->math_score+this->lit_score+this->eng_score;
    return sum>=score ? true: false;
}
