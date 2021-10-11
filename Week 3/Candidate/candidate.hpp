//
//  candidate.hpp
//  Candidate
//
//  Created by Macintosh HD on 09/10/2021.
//

#ifndef candidate_hpp
#define candidate_hpp

#include <iostream>
#include <string.h>
#include <iomanip>

using namespace std;

const char separator    = ' ';
const int width = 10;

class candidate{
private:
    int id;
    string name;
    string date_of_birth;
    float math_score;
    float lit_score;
    float eng_score;
    bool is_valid;
public:
    candidate();
    void set_candidate(int );
    void display_candidate();
    
    bool filter_candidate_by_score(int);
    bool check_valid_score(float);
    
};


#endif /* candidate_hpp */
