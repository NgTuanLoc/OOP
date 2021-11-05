//
//  CTime.cpp
//  CTime
//
//  Created by Macintosh HD on 05/11/2021.
//

#include "CTime.hpp"
CTime::CTime(){
    _time = 0;
}

CTime::CTime(int time){
    _time = time;
}

istream& operator>> (istream& input,CTime& time){
    cout<<"Input time: "<<endl;
    input>>time._time;
    return input;
}

ostream& operator<< (ostream &out, CTime time){
    out<<"Time: "<<time._time<<endl;
    return out;
}

void CTime::operator+(int n){
    _time += n;
}

void CTime::operator-(int n){
    _time -= n;
}

void CTime::operator++(){
    _time += 1;
}

void CTime::operator--(){
    _time -= 1;
}
