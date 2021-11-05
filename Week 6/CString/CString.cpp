//
//  CString.cpp
//  CString
//
//  Created by Macintosh HD on 05/11/2021.
//

#include "CString.hpp"

CString::CString()
{
    s = "Null";
}

ostream &operator<<(ostream &out,const CString &a)
{
    out<<a.s;
    return out;
}
istream &operator>>(istream &in,CString &a)
{
    getline(in,a.s);
    return in;
}
CString CString::operator+(const CString &a)
{
    CString z;
    z.s=s;
    z.s+=a.s;
    return z;
}
void CString::operator=(const CString &a)
{
    s=a.s;
}
bool CString::operator<(const CString &a)
{
    if(s<a.s) return true;
    return false;
}
bool CString::operator<=(const CString &a)
{
    if(s<=a.s) return true;
    return false;
}
bool CString::operator>(const CString &a)
{
    if(s>a.s) return true;
    return false;
}
bool CString::operator>=(const CString &a)
{
    if(s>=a.s) return true;
    return false;
}
bool CString::operator==(const CString &a)
{
    if(s==a.s) return true;
    return false;
}
bool CString::operator!=(const CString &a)
{
    if(s!=a.s) return true;
    return false;
}
