// Kiểm tra số nguyên nhập vào có phải là: số nguyên tố, số chính phương, số hoàn thiện, số đối xứng hay không?

#include<iostream>
#include"math.h"
using namespace std;

bool is_prime(int);
bool is_square(int );
bool is_perfect(int);
bool is_palindrome(int);

int main(){
    do{
        int x = 0;
        cout<<"Enter your number : ";
        cin>>x;
        if((!is_prime(x) && !is_square(x) && !is_perfect(x) && !is_palindrome(x)) || x<0){
            cout<<"\n"<<x<<" is NORMAL number"<<endl;
        } else{
            if(is_prime(x)){
                cout<<"\n"<<x<<" is prime number"<<endl;
            }
            if(is_square(x)){
                cout<<"\n"<<x<<" is square number"<<endl;
            }
            if(is_perfect(x)){
                cout<<"\n"<<x<<" is perfect number"<<endl;
            }
            if(is_palindrome(x)){
                cout<<"\n"<<x<<" is palindrome number"<<endl;
        }
        }
        cout<<"-----------------END-----------------"<<endl;
    } while(true);
    return 0;
}

bool is_prime(int n){
    if(n==0 || n==1) return false;
    for(int i=2; i<= sqrt(n); i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

bool is_square(int n){
    int i = 0;
    while (i<n)
    {
        if(i*i==n) return true;
        i++;
    }
    
    return false;
}
bool is_perfect(int n){
    int sum = 0;
    for(int i=1; i<n; i++){
        if(n%i==0){
            sum += i;
        }
    }
    return sum == n ? true: false;
}
bool is_palindrome(int n){
    int r,sum=0,temp;
    for(temp=n;n!=0;n=n/10){
        r=n%10;
        sum=sum*10+r;
    }
    
    return temp==sum ? true: false;
}