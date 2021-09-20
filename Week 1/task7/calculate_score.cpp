// Nhập điểm chuẩn và điểm 3 môn thi, mã khu vực (A, B, C), mã đối tượng (1, 2, 3) của thí sinh. Hiển thị kết quả “Trúng tuyển” nếu tổng điểm thi 3 môn cộng với điểm ưu tiên khu vực và điểm ưu tiên đối tượng lớn hơn hoặc bằng điểm chuẩn và không có môn nào bị điểm liệt (0 điểm). Trong đó, điểm ưu tiên khu vực và điểm ưu tiên đối tượng được tình như sau:
// • Khu vực A: cộng 1.5 điểm
// • Khu vực B: cộng 1 điểm
// • Khu vực C: cộng 0.5 điểm
// • Đối tượng 1: cộng 1.5 điểm
// • Đối tượng 2: cộng 1 điểm
// • Đối tượng 3: cộng .5 điểm

#include<iostream>
using namespace std;

void check_valid_score_input(float &);

int main(){
    float benchmark, math_score, eng_score, lit_score, final_score;
    int student_priority_code;
    char  student_area_code;
    const char area_code[3] = {'A', 'B', 'C'};
    const int priority_code[3] = {1, 2, 3};

    cout<<"Enter benchmark score: "<<endl;
    cin>>benchmark;
    cout<<"Enter math score score: "<<endl;
    check_valid_score_input(math_score);
    cout<<"Enter english score score: "<<endl;
    check_valid_score_input(eng_score);
    cout<<"Enter literature score: "<<endl;
    check_valid_score_input(lit_score);
    cout<<"Area code: "<<endl;
    cin>>student_area_code;
    cout<<"Priority code: "<<endl;
    cin>>student_priority_code;

    final_score = math_score + eng_score + lit_score;

    switch (student_area_code)
    {
        case 'A':
            final_score += 1.5;
            break;
        case 'B':
            final_score += 1;
            break;
        case 'C':
            final_score += 0.5;
            break;
        default:
            cout<<"Invalid area code !!!";
            break;
    }

    switch (student_priority_code)
    {
        case 1:
            final_score += 1.5;
            break;
        case 2:
            final_score += 1;
            break;
        case 3:
            final_score += 0.5;
            break;
        default:
            cout<<"Invalid priority code !!!";
            break;
    }

    if(final_score>=benchmark){
        cout<<"Congrats !!!"<<endl;
    } else{
        cout<<"You're fail :("<<endl;
    }
    return 0;
}

void check_valid_score_input(float &score){
    bool is_valid;
    do{
        cin>>score;
        is_valid = true;
        if(score<0 || score >10){
            cout<<"Invalid score !"<<endl;
            is_valid = false;
        }
    } while(!is_valid);
}