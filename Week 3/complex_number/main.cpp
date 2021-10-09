//
//  main.cpp
//  complex_number
//
//  Created by Macintosh HD on 08/10/2021.
//
//2. Xây dựng lớp biểu diễn khái niệm số phức với hai thành phần dữ liệu thực, ảo và các hàm thành phần xuất, nhập, định giá trị cho số phức, cộng, trừ, nhân, chia hai số phức. Viết chương trình cho phép nhập vào hai số phức, in ra kết quả các phép toán cộng, trừ, nhân, chia hai số phức kể trên.

#include "complex_number.hpp"

int main(int argc, const char * argv[]) {
    complex a;
    complex b;
    complex c;
    
    int choice=-1;
    
    do{
        cout<<"--------------- Complex number calculator ---------------"<<endl;
        cout<<"1. Enter data for complex number "<<endl;
        cout<<"2. Display complex number"<<endl;
        cout<<"3. Summary"<<endl;
        cout<<"4. Substraction"<<endl;
        cout<<"5. Multiplication"<<endl;
        cout<<"6. Division"<<endl;
        cout<<"Your choice: ";
        cin>>choice;
        cout<<endl;
        
        if(choice != 1){
            if(a.is_null_check() || b.is_null_check()){
                cout<<"Complex number is null"<<endl;
                continue;
            }
        } else if(choice==0){
            cout<<"Program is closing ..."<<endl;
            break;
        }
        switch (choice) {
            case 1:{
                a.set_complex_number();
                b.set_complex_number();
                break;
            }
            case 2:{
                a.display_complex_number();
                b.display_complex_number();
                break;
            }
            case 3:{
                c = a+b;
                c.display_complex_number();
                break;
            }
            case 4:{
                c = a-b;
                c.display_complex_number();
                break;
            }
            case 5:{
                c = a*b;
                c.display_complex_number();
                break;
            }
            case 6:{
                c = a/b;
                c.display_complex_number();
                break;
            }
                
            default:
                cout<<"Invalid choice !"<<endl;
                break;
        }
    } while(choice);
    return 0;
}
