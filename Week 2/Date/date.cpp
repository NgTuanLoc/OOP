//
//  date.cpp
//  Date
//
//  Created by Macintosh HD on 27/09/2021.
//

#include "date.hpp"
void set_date(date &date){
    do{
        cout<<"Enter day: ";
        cin>>date.dd;
        cout<<"\nEnter month: ";
        cin>>date.mm;
        cout<<"\nEnter Year: ";
        cin>>date.yyyy;
    } while(!check_valid_date(date));
    date.is_null = false;
}

void output_date(date date){
    cout<<"Day: "<<date.dd<<"/"<<date.mm<<"/"<<date.yyyy<<endl;
}

int get_last_day(date current_date){
    int last_day;
    switch (current_date.mm)
        {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            last_day = 31;
            break;
        case 4: case 6: case 9: case 11:
            last_day = 30;
            break;
        case 2:
            if (current_date.yyyy % 400 == 0 || (current_date.yyyy % 4 == 0 && current_date.yyyy % 100 != 0))
                last_day = 29;
            else last_day = 28;
            break;
        default: last_day = 0;
        }
    return last_day;
}

bool check_valid_date(date current_date){
    int last_day = get_last_day(current_date);
    if (last_day == 0 || current_date.yyyy < 1 || (last_day != 0 && (current_date.dd > last_day || current_date.dd < 1)))
        {
            cout << "Invalid Date, please try again !:"<<endl;
            return false;
        }
    return true;
}

date get_next_date(date current_date){
    date next_date;
    int last_day = get_last_day(current_date);
    if (current_date.dd < last_day)
        {
            next_date.dd = current_date.dd + 1;
            next_date.mm = current_date.mm;
            next_date.yyyy = current_date.yyyy;
        }
        else
        {
            if (current_date.mm != 12)
            {
                next_date.dd = 1;
                next_date.mm = current_date.mm + 1;
                next_date.yyyy = current_date.yyyy;
            }
            else
            {
                next_date.dd = 1;
                next_date.mm = 1;
                next_date.yyyy = current_date.yyyy + 1;
            }
        }
    return next_date;
}
