//
//  main.cpp
//  student_management
//
//  Created by Macintosh HD on 28/09/2021.
//
// Bài 5. Xây dựng cấu trúc  Học sinh (mã số, họ tên, điểm Toán, điểm Văn, học bổng) và các phương thức sau:
// 1. Nhập thông tin học sinh (chỉ nhập mã số, họ tên, điểm Toán, điểm Văn, tính ĐTB và dựa vào ĐTB để gán giá trị Học bổng tương ứng theo quy tắc: ĐTB<8: không được nhận Học bổng, 8<=ĐTB<9: được nhận học bổng 1 triệu, 9<=ĐTB<=10: được nhận học bổng 2 triệu)
// 2. Xuất thông tin học sinh (mã số, họ tên, điểm Toán, điểm Văn, ĐTB, xếp loại và học bổng)
// 3. Tính điểm trung bình cộng (ĐTB) của học sinh
//4. Xếp loại học lực của học sinh theo điểm TB:
//    - ĐTB<5: Yếu (Poor)
//    - 5<=ĐTB<7: TB (average)
//    - 7<=ĐTB<8: Khá (good)
//    - 8<=ĐTB<9: Giỏi  (very good)
//    - 9<=ĐTB<=10: Xuất sắc (excellent)
//Sau đó, xây dựng cấu trúc Lớp học (mảng cấu trúc tối đa 50 Học sinh, sĩ số lớp) và các phương thức xử lý Lớp học như sau:
//    a. Nhập lớp
//    b. Xuất lớp
//    c. Liệt kê danh sách các Học sinh Yếu
//    d. Đếm số lượng các Học sinh TB
//    e. Tính tổng học bổng đã cấp cho các Học sinh Xuất sắc
//    f. Tính điểm trung bình chung của các Học sinh Giỏi
//    g. Kiểm tra lớp có Học sinh Yếu không?
//    h. Sắp xếp danh sách lớp giảm dần theo Học bổng, nếu trùng Học bổng thì sắp xếp tăng dần theo mã số.
//    i. Tìm học sinh theo: mã số, họ tên, ĐTB, hoặc học bổng.

#include "class_member.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    cm class1;
    int choice;
    do{
        cout<<"\n -----------Class Management system-----------"<<endl;
        cout<<"1. Input class information: "<<endl;
        cout<<"2. Output class'member list "<<endl;
        cout<<"3. List poor status students  "<<endl;
        cout<<"4. Number of average status students"<<endl;
        cout<<"5. Number of scholarship for excellent students"<<endl;
        cout<<"6. Average score of very good status students"<<endl;
        cout<<"7. Check class has poor status student"<<endl;
        cout<<"8. Sorting by scholarship"<<endl;
        cout<<"9. Searching student "<<endl;
        
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
           if (class1.is_null ){
               cout<<"Class data must not be empty!!!"<<endl;
               continue;
           }
        }
        switch (choice) {
            case 1:
                set_student_list(class1);
                break;
            case 2:
                output_student_list(class1);
                break;
            case 3:
                output_poor_status_student(class1);
                break;
            case 4:
                cout<<"Number of average status students: "<<count_average_status_student(class1)<<endl;
                break;
            case 5:
                cout<<"Number of scholarship for excellent students: "<<count_excellent_scholarship(class1)<<endl;
                break;
            case 6:
                cout<<"Average score of very good status students: "<<get_average_score_of_very_good_status_student(class1)<<endl;
                break;
            case 7:
                cout<<"Check class has poor status student: "<<check_poor_status_student(class1)<<endl;
                break;
            case 8:
                
                break;
            case 9:
                
                break;
            default:
                cout<<"Invalid choice !"<<endl;
                break;
        }
        
    } while(choice !=0);

    return 0;
}
