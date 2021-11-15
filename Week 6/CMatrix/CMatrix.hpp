//
//  CMatrix.hpp
//  CMatrix
//
//  Created by Macintosh HD on 05/11/2021.
//

#ifndef CMatrix_hpp
#define CMatrix_hpp


#include <iostream>
using namespace std;

#define max 100

class cmatrix
{
private:
    int _m[max][max];
    int _row, _col;
public:
    cmatrix();
    cmatrix(int, int);
   
    bool check_valid_size();
    
    friend istream& operator>>(istream&, cmatrix&);
    friend ostream& operator<<(ostream&, cmatrix);
    
    friend cmatrix operator *(cmatrix, cmatrix);
    void operator =(cmatrix);
};

#endif /* CMatrix_hpp */
