//
//  main.cpp
//  Candidate
//
//  Created by Macintosh HD on 09/10/2021.
//
//3. Xây dựng lớp Candidate (Thí sinh) gồm các thuộc tính: mã, tên, ngày tháng năm sinh, điểm thi Toán, Văn, Anh và các phương thức cần thiết.
//  Xây dựng lớp TestCandidate để kiểm tra lớp trên:
//- Nhập vào n thí sinh (n do người dùng nhập)
//- In ra thông tin về các thí sinh có tổng điểm lớn hơn 15

#include "test_candidate.hpp"

int main(int argc, const char * argv[]) {
    test_candidate classA;
    classA.set_number_of_candidate();
    classA.set_all_of_candidate();
    classA.show_candidate_greater_15();
    return 0;
}
