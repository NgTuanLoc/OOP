//
//  interger.cpp
//  Interger
//
//  Created by Macintosh HD on 05/11/2021.
//

#include "interger.hpp"

interger::interger()
{
    n = 0;
}

interger::interger(float number)
{
    n = number;
}

ostream &operator<<(ostream &out,const interger &a)
{
    out<<"Interger : "<<a.n<<endl;
    return out;
}
istream &operator>>(istream &in,interger &a)
{
    cout<<"Input number : ";
    in>>a.n;
    cout<<endl;
    return in;
}
interger interger::operator+(const interger &a)
{
    interger z;
    z.n=this->n+a.n;
    return z;
}
interger interger::operator-(const interger &a)
{
    interger z;
    z.n=this->n-a.n;
    return z;
}
interger interger::operator*(const interger &a)
{
    interger z;
    z.n=this->n*a.n;
    return z;
}
interger interger::operator/(const interger &a)
{
    interger z;
    z.n=this->n/a.n;
    return z;
}
void interger::operator++()
{
    n++;
}
void interger::operator--()
{
    n--;
}

void interger::operator=(interger input_interger){
    n = input_interger.n;
}

bool interger::operator ==(interger input_interger){
    return n==input_interger.n ? true: false;
}

bool interger::operator !=(interger input_interger){
    return n!=input_interger.n ? true: false;
}

bool interger::operator >=(interger input_interger){
    return n>=input_interger.n ? true: false;
}

bool interger::operator <=(interger input_interger){
    return n<=input_interger.n ? true: false;
}

bool interger::operator >(interger input_interger){
    return n>input_interger.n ? true: false;
}

bool interger::operator <(interger input_interger){
    return n<input_interger.n ? true: false;
}
