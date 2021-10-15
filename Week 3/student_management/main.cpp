//
//  main.cpp
//  student_management
//
//  Created by Macintosh HD on 15/10/2021.
//5. Xây dựng class HocSinh:
//– Thuộc tính:
//Họ tên học sinh
//Điểm Văn, Toán.
//– Phương thức:
//Khởi tạo học sinh tên rỗng, 2 điểm văn, toán đều = 0
//Khởi tạo học sinh tùy ý
//Nhập học sinh
//Xuất học sinh
//Tính ĐTB của học sinh
//Học sinh Xếp loại học lực của học sinh theo điểm TB:
//    - ĐTB<5: Yếu (Poor)
//    - 5<=ĐTB<7: TB (average)
//    - 7<=ĐTB<8: Khá (good)
//    - 8<=ĐTB<9: Giỏi  (very good)
//    - 9<=ĐTB<=10: Xuất sắc (excellent)

#include "student.hpp"

void menu(){
    cout<<"---------------- STUDENT MANAGEMENT ----------------"<<endl;
    cout<<"1. Fill student's information "<<endl;
    cout<<"2. Display student's information "<<endl;
    cout<<"3. Get average score "<<endl;
    cout<<"4. Get study status "<<endl;
    cout<<"0. Shutdown system "<<endl;
}

int main(int argc, const char * argv[]) {
    int choice = -1;
    student a;
    
    do{
        menu();
        cout<<"Your choice :";
        cin>>choice;
        if (choice == 0) {
            cout<<"System shutdown ... "<<endl;
            break;
        }
        if (choice != 1) {
            if (a.is_student_null()) {
                cout<<"Student's detail is null "<<endl;
                continue;
            }
        }
        
        switch (choice) {
            case 1:
                a.set();
                break;
            case 2:
                a.display();
                break;
            case 3:
                cout<<"Student "<<a.get_name()<<"'s average score: "<<a.get_average_score(a.get_lit_score(), a.get_math_score())<<endl;
                break;
            case 4:
                cout<<"Student "<<a.get_name()<<"'s study status: "<<a.get_study_status()<<endl;
                break;
            default:
                cout<<"Invalid choice !!!"<<endl;
                break;
        }
    } while(choice);
    return 0;
}
