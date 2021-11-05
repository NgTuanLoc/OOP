//
//  CDate.cpp
//  CDate
//
//  Created by Macintosh HD on 05/11/2021.
//

#include "CDate.hpp"
#include "CDate.hpp"
CDate::CDate(){
    _dd = 0;
    _mm = 0;
    _yyyy = 0;;
}

CDate::CDate(int dd, int mm, int yyyy){
    _dd = dd;
    _mm = mm;
    _yyyy = yyyy;
}

int CDate::get_last_day(CDate current_date){
    int last_day;
    switch (current_date._mm)
        {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            last_day = 31;
            break;
        case 4: case 6: case 9: case 11:
            last_day = 30;
            break;
        case 2:
            if (current_date._yyyy % 400 == 0 || (current_date._yyyy % 4 == 0 && current_date._yyyy % 100 != 0))
                last_day = 29;
            else last_day = 28;
            break;
        default: last_day = 0;
        }
    return last_day;
}

bool CDate::check_valid_date(CDate current_date){
    int last_day = get_last_day(current_date);
    if (last_day == 0 || current_date._yyyy < 1 || (last_day != 0 && (current_date._dd > last_day || current_date._dd < 1)))
        {
            cout << "Invalid Date, please try again !:"<<endl;
            return false;
        }
    return true;
}

istream& operator>>(istream& in, CDate& date){
    do{
        cout<<"Enter day: ";
        in>>date._dd;
        cout<<"\nEnter month: ";
        in>>date._mm;
        cout<<"\nEnter Year: ";
        in>>date._yyyy;
    } while(!date.check_valid_date(date));
    date.is_null = false;
    return in;
}

ostream& operator<<(ostream& out, CDate date){
    out<<"Day: "<<date._dd<<"/"<<date._mm<<"/"<<date._yyyy<<endl;
    return out;
}

CDate CDate::get_next_date(CDate current_date){
    CDate next_date;
    int last_day = get_last_day(current_date);
    if (current_date._dd < last_day)
        {
            next_date._dd = current_date._dd + 1;
            next_date._mm = current_date._mm;
            next_date._yyyy = current_date._yyyy;
        }
        else
        {
            if (current_date._mm != 12)
            {
                next_date._dd = 1;
                next_date._mm = current_date._mm + 1;
                next_date._yyyy = current_date._yyyy;
            }
            else
            {
                next_date._dd = 1;
                next_date._mm = 1;
                next_date._yyyy = current_date._yyyy + 1;
            }
        }
    return next_date;
}

CDate CDate::get_previous_date(CDate current_date){
    CDate prev_date(current_date._dd-1, current_date._mm, current_date._yyyy);
    if (prev_date._dd != 0)
        {
            return prev_date;
        }
        else
        {
            if (current_date._mm != 1)
            {
                CDate next_prev_date(prev_date._dd-1, prev_date._mm-1, prev_date._yyyy);
                int last_day = get_last_day(next_prev_date);
                
                prev_date._dd = last_day;
                prev_date._mm = current_date._mm - 1;
                prev_date._yyyy = current_date._yyyy;
            }
            else
            {
                prev_date._dd = 31;
                prev_date._mm = 12;
                prev_date._yyyy = current_date._yyyy - 1;
            }
        }
    return prev_date;
}

void CDate::operator =(CDate input_date){
    _dd = input_date._dd;
    _mm = input_date._mm;
    _yyyy = input_date._yyyy;
}

void CDate::operator +(int n){
    for (int i = 0; i<n; i++) {
        CDate temp = get_next_date(*this);
        _dd = temp._dd;
        _mm = temp._mm;
        _yyyy = temp._yyyy;
    }
}

void CDate::operator -(int n){
    for (int i = 0; i<n; i++) {
        CDate temp = get_previous_date(*this);
        _dd = temp._dd;
        _mm = temp._mm;
        _yyyy = temp._yyyy;
    }
}

void CDate::operator ++(){
    CDate temp = get_next_date(*this);
    _dd = temp._dd;
    _mm = temp._mm;
    _yyyy = temp._yyyy;
}

void CDate::operator --(){
    CDate temp = get_previous_date(*this);
    _dd = temp._dd;
    _mm = temp._mm;
    _yyyy = temp._yyyy;
}
