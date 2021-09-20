// Nhập vào số tiền. Hãy tính và in ra số tờ tiền tương ứng của các mệnh giá giảm dần: 500k, 200k, 100k, 50k. (giả sử đổi hết mệnh giá lớn, phần dư mới đổi sang mệnh giá nhỏ hơn).

#include <iostream>
using namespace std;
const int money_type[4] ={500000, 200000, 100000, 50000};



int main(){
    float money;
    cout<<"Enter amount of money you have: "<<endl;
    cin>>money;

    const int arr_length = sizeof(money_type)/sizeof(money_type[0]);

    for(int i=0; i<arr_length; i++){
        int amount = money/money_type[i];
        cout<<money_type[i]<< " "<<amount<<endl;
        money -= float(amount*money_type[i]);
    }
    cout<<"Money left :"<<money<<endl;

    
    return 0;
}