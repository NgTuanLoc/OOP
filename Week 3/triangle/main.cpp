//
//  main.cpp
//  triangle
//
//  Created by Macintosh HD on 13/10/2021.
//
//4. Xây dựng class TamGiac:
//
//– Thuộc tính:
//Độ dài 3 cạnh tam giác.

//– Phương thức:
//Khởi tạo tam giác
//Nhập tam giác
//Xuất tam giác
//Kiểm tra 3 cạnh tam giác hợp lệ không?
//Phân loại tam giác
//Tính chu vi tam giác
//Tính diện tích tam giác

#include "triangle.hpp"

void menu(){
    cout<<"--------------- Triangle ---------------"<<endl;
    cout<<"1/ Set triangle"<<endl;
    cout<<"2/ Display triangle"<<endl;
    cout<<"3/ Classify triangle"<<endl;
    cout<<"4/ Get Perimeter of triangle"<<endl;
    cout<<"5/ Get Area of triangle"<<endl;
    cout<<"0/ Shutdown system"<<endl;
}

int main(int argc, const char * argv[]) {
    int choice = -1;
    triangle a;
    
    do{
        menu();
        cout<<"Your choice: ";
        cin>>choice;
        
        if (!choice) {
            cout<<"System shutdown ..."<<endl;
            break;
        }
        
        switch (choice) {
            case 1:
                a.set();
                break;
            case 2:
                a.display();
                break;
            case 3:
                cout<<"Triangle type: "<<a.classify_triangle()<<endl;
                break;
            case 4:
                cout<<"Perimeter: "<<a.get_triangle_perimeter()<<endl;
                break;
            case 5:
                cout<<"Area: "<<a.get_triangle_area()<<endl;
                break;
            default:
                cout<<"Invalid choice"<<endl;
                break;
        }
    } while(choice);
    return 0;
}
