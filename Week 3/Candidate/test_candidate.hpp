//
//  test_candidate.hpp
//  Candidate
//
//  Created by Macintosh HD on 11/10/2021.
//

#ifndef test_candidate_hpp
#define test_candidate_hpp

#include "candidate.hpp"
class test_candidate{
private:
    int number_of_candidate;
    candidate * student = new candidate[100];
public:
    test_candidate();
    void set_number_of_candidate();
    void set_all_of_candidate();
    void show_candidate_greater_15();
    ~test_candidate();
};


#endif /* test_candidate_hpp */
