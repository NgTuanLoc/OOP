// Nhập vào username và password. Nếu nhập sai quá 3 lần thì in thông báo lỗi, ngược lại hiển thị câu chào username.
#include <iostream>
#include <string>
using namespace std;
const string username_const = "helloworld";
const string password_const = "123hello";

bool is_user_valid(string , string);

int main(){
    string username, password;

    int error_count = 0;
    do{
        cout<<"Enter username: ";
        getline(cin, username);
        cout<<"\nEnter password: ";
        getline(cin, password);
        cout<<"--------------"<<endl;
        if(is_user_valid(username, password)){
            cout<<"Login succeed ! Hello "<<username<<" <3"<<endl;
            break;
        }
        if(error_count==3){
            cout<<"Fail to login"<<endl;
            break;
        }
        if(error_count){
            cout<<"Invalid username or password in "<<error_count<<" time !"<<endl;
        }
        error_count++;
    } while(!is_user_valid(username, password));

    return 0;
}

bool is_user_valid(string username, string password){
    if(username_const.compare(username) || password_const.compare(password)){
        return false;
    }
    return true;
}