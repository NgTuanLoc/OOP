//
//  main.cpp
//  Fraction
//
//  Created by Macintosh HD on 27/09/2021.
//
//GV đã hướng dẫn tạo thư viện xử lý phân số (Bài 1, 2, 3).
//Yêu cầu SV hoàn thành lại 3 bài tập này. Xây dựng file main với giao diện menu chọn lựa:
//1. Nhập 1 phân số
//2. Rút gọn 1 phân số
//3. Xuất 1 phân số
//4. Nhập 2 phân số
//5. Tìm phân số lớn hơn trong 2 phân số
//6. Tính tổng 2 phân số
//7. Tính hiệu 2 phân số
//8. Tính tích 2 phân số
//9. Tính thương 2 phân số
//10. Tính giá trị thực của phân số
//0. Thoát CT

#include "fraction.hpp"

int main(int argc, const char * argv[]) {
    int choice = -1;
    fraction f1;
    fraction f2;
    
    do{
        cout<<"\n -----------Fraction computing system-----------"<<endl;
        cout<<"1. Input 2 fraction"<<endl;
        cout<<"2. Reducing fraction"<<endl;
        cout<<"3. Addition "<<endl;
        cout<<"4. Subtraction"<<endl;
        cout<<"5. Multiplication"<<endl;
        cout<<"6. Division"<<endl;
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
            if (f1.is_null || f2.is_null){
                cout<<"Fraction must not be empty!!!"<<endl;
                continue;
            }
        }
        switch (choice) {
            case 1:
                set_fraction(f1);
                set_fraction(f2);
                output_fraction(f1);
                output_fraction(f2);
                break;
            case 2:
                reduce_fraction(f1);
                reduce_fraction(f2);
                output_fraction(f1);
                output_fraction(f2);
                break;
            case 3:
                output_fraction(add_fraction(f1, f2));
                break;
            case 4:
                output_fraction(sub_fraction(f1, f2));
                break;
            case 5:
                output_fraction(mul_fraction(f1, f2));
                break;
            case 6:
                output_fraction(div_fraction(f1, f2));
                break;
            default:
                break;
        }
        
    } while(choice !=0);

    return 0;
}
