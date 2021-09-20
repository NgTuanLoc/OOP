// Nhập giờ vào ca, giờ ra ca của 1 công nhân. Tính và in ra tiền lương ngày của công nhân đó.
// Biết rằng:
// • Giờ vào ca sớm nhất là 6h và giờ ra ca trễ nhất là 18h.
// • Tiền công trước 12h là 6000đ/giờ và sau 12h là 7500đ/giờ.

#include <iostream>
using namespace std;

void input_work_time(int &,int &);

int main(){
    int time_start, time_out;
    do{
        input_work_time(time_start, time_out);
        int outcome = 0;

        if(time_start<=12 && time_out >=12){
            outcome = (12-time_start)*6000 + (time_out-12)*7500;
        } else if(time_out<=12){
            outcome = (time_out-time_start)*6000;
        } else{
            outcome = (time_out-time_start)*7500;
        }
        cout<<"Worker's final outcome: "<<outcome<<"$"<<endl;
        cout<<"----------------NEXT----------------"<<endl;
    } while(true);

    return 0;
}

void input_work_time(int &time_start, int &time_out){
    bool is_valid = true;
    do{
        cout<<"Worker's starter time: ";
        cin>>time_start;
        if (time_start<6 || time_start>18)
        {
            cout<<"Invalid start-time !"<<endl;
            is_valid = false;
            continue;
        }
        
        cout<<"\nWorker's out time: "<<endl;
        cin>>time_out;
        if(time_out<6 || time_out>18 || time_out<=time_start){
            cout<<"Invalid end-time !"<<endl;
            is_valid = false;
            continue;
        }
        is_valid = true;
        cout<<endl;
    }   while(!is_valid);
}