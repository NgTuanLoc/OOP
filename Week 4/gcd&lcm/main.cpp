//
//  main.cpp
//  gcd&lcm
//
//  Created by Macintosh HD on 22/10/2021.
//
//Bài 1.  Xây dựng class Tìm USCLN và BSCNN của 2 số a, b (USCLN_BSCNN) gồm có:
//
//a. Thuộc tính: a, b (nguyên)
//
//b. Phương thức:
//
//Thiết lập (Constructor):  mặc định a = b = 0
//getA và setA
//getB và setB
//Nhập: gía trị a và b
//Tìm USCLN của a và b
//Tìm BSCNN của a và b
//Xuất (USCLN và BSCNN của a và b)
//=> Xây dựng hàm main() chứa menu thực hiện các chức năng của CT.

#include "number.hpp"

void display_menu(int &choice){
    cout<<"------------- Find GCD & LCM -------------"<<endl;
    cout<<"1. Input "<<endl;
    cout<<"2. Get GCD "<<endl;
    cout<<"3. Get LCM "<<endl;
    cout<<"4. Display GCD and LCM "<<endl;
    cout<<"0. Shutdown !!! "<<endl;
    cout<<"-----------------------------------------------"<<endl;
    cout<<"Your choice: ";
    cin>>choice;
    cout<<endl;
}

int main(int argc, const char * argv[]) {
    number k;
    int choice = 1;
    
    do{
        display_menu(choice);
        
        switch (choice) {
            case 1:
                k.input();
                break;
            case 2:
                cout<<"GCD of "<<k.getA()<<" and "<<k.getB()<<" : "<<k.get_gcd()<<endl;
                break;
            case 3:
                cout<<"LCM of "<<k.getA()<<" and "<<k.getB()<<" : "<<k.get_lcm()<<endl;
                break;
            case 4:
                k.output();
                break;
            case 0:
                cout<<"Shutdown ..."<<endl;
                break;
            default:
                cout<<"Invalid choice"<<endl;
                break;
        }
    } while(choice);
    return 0;
}
