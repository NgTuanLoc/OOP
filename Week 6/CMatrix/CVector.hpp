//
//  CVector.hpp
//  CVector
//
//  Created by Macintosh HD on 05/11/2021.
//

#ifndef CVector_hpp
#define CVector_hpp


#include "CMatrix.hpp"
#include<iostream>
using namespace std;

const int Nmax=100;


class cvector
{
private:
    int _n[Nmax];
    int _size;
public:
    cvector();
    cvector(int);
   
    bool check_valid_size();
    
    friend istream& operator>>(istream&, cvector&);
    friend ostream& operator<<(ostream&, cvector);
    

};

#endif /* CVector_hpp */
