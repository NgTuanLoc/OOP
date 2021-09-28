//
//  main.cpp
//  Date
//
//  Created by Macintosh HD on 27/09/2021.
//
//Bài 4. Xây dựng cấu trúc Ngày (ngày, tháng, năm) và các phương thức:
//1. Nhập ngày
//2. Thiết lập ngày (truyền vào 3 giá trị ngày, tháng, năm)
//3. Xuất ngày
//4. Tính số ngày trong tháng
//5. Kiểm tra ngày hợp lệ
//6. Tìm ngày kế tiếp

#include "date.hpp"

int main(int argc, const char * argv[]) {
    date current_date;
    int choice;
    do{
        cout<<"\n -----------Date computing system-----------"<<endl;
        cout<<"1. Input date: "<<endl;
        cout<<"2. Set date"<<endl;
        cout<<"3. Output date:  "<<endl;
        cout<<"4. Count number of days in month"<<endl;
        cout<<"5. check valid date"<<endl;
        cout<<"6. Find next date"<<endl;
        cout<<"0. System shut down !"<<endl;
        cout<<"\n -----------------------------------------"<<endl;
        cout<<"Your choice : ";
        cin>>choice;
        cout<<endl;
        
        if (choice ==0) {
            cout<<"System shutdown !!!"<<endl;
            break;
        }
        if (choice !=1) {
            if (current_date.is_null ){
                cout<<"Date must not be empty!!!"<<endl;
                continue;
            }
        }
        switch (choice) {
            case 1:
                set_date(current_date);
                break;
            case 2:
                set_date(current_date);
                break;
            case 3:
                output_date(current_date);
                break;
            case 4:
                cout<<"Number of day in ";
                output_date(current_date);
                cout<<" "<<get_last_day(current_date)<<endl;
                break;
            case 5:
                if (check_valid_date(current_date)) {
                    output_date(current_date);
                    cout<<" is valid"<<endl;
                } else{
                    output_date(current_date);
                    cout<<" is NOT valid"<<endl;
                }
                    
                break;
            case 6:
                cout<<"Next date is ";
                output_date(get_next_date(current_date));
                break;
            default:
                break;
        }
        
    } while(choice !=0);

    return 0;
}
