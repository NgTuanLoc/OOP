//
//  CString.hpp
//  CString
//
//  Created by Macintosh HD on 05/11/2021.
//

#ifndef CString_hpp
#define CString_hpp
#include <iostream>
using namespace std;

class CString
{
private:
    string s;
public:
    CString();
    
    friend ostream &operator<<(ostream &out,const CString &a);
    friend istream &operator>>(istream &in,CString &a);
    
    CString operator+(const CString &a);
    
    void operator=(const CString &a);
    bool operator<(const CString &a);
    bool operator<=(const CString &a);
    bool operator>(const CString &a);
    bool operator>=(const CString &a);
    bool operator==(const CString &a);
    bool operator!=(const CString &a);
};

#endif /* CString_hpp */
