//
//  main.cpp
//  multiplication_table
//
//  Created by Macintosh HD on 12/10/2021.
//
//3. Xây dựng class BangCuuChuong:
//
//– Thuộc tính:
//  2 số nguyên: m, n.
//– Phương thức:
//  Các phương thức khởi tạo m, n từ 2 đến 9
//  Nhập m, n
//  In bảng cửu chương m
//  In bảng cửu chương từ m đến n
//  In bảng cửu chương tổng hợp từ 2 đến 9

#include "mul_table.hpp"

void display_menu(){
    cout<<"------------- Multiplication Table -------------"<<endl;
    cout<<"1. Input multiplication table "<<endl;
    cout<<"2. Display multiplication table "<<endl;
    cout<<"3. Multiplication table from m "<<endl;
    cout<<"4. Multiplication table from m to n "<<endl;
    cout<<"5. Multiplication table from 2 to 9 "<<endl;
    cout<<"6. Reset m, n "<<endl;
    cout<<"-----------------------------------------------"<<endl;
}

int main(int argc, const char * argv[]) {
    mul_table a;
    int choice=-1;
    
    do{
        display_menu();
        cout<<"Your choice : ";
        cin>>choice;
        cout<<endl;
        
        if (choice==0) {
            cout<<"Exit Program ..."<<endl;
            break;
        }
        
        switch (choice) {
            case 1:
                a.set();
                break;
            case 2:
                a.show_table_from_m_to_n();
                break;
            case 3:
                a.show_table_from_m();
                break;
            case 4:
                a.show_table_from_m_to_n();
                break;
            case 5:
                a.show_all_table();
                break;
            case 6:
                a.set();
                break;
            default:
                cout<<"Invalid choice !"<<endl;
                break;
        }
    } while(choice);
    return 0;
}
