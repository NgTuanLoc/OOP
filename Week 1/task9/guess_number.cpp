// Viết chương trình mô phỏng trò chơi đoán số mà máy phát sinh. Nếu đoán đúng thì hiển thị
// chúc mừng, nếu nhỏ hơn hoặc lớn hơn thì thông báo cho người dùng biết mà đoán lại.
#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    int max=10;
    int min=0;
    int guess;
    srand(time(NULL)); 
	int random_number = rand() % (max - min + 1) + min;

    do{
        cout<<"Your guess: ";
        cin>>guess;
        if(guess<random_number){
            cout<<"Your number must be higher"<<endl;
        } else if(guess>random_number){
            cout<<"Your number must be lower"<<endl;
        } else{
            cout<<"Congrats !!!"<<endl;
            break;
        }
    } while(true);
    cout<<random_number<<endl;
	return 0;
}