// Giải và biện luận phương trình bậc 2: ax2 + bx + c = 0
#include<iostream>
#include<math.h>
using namespace std;

int main(){
    cout<<"Quadratic Function: ax^2 + bx +c=0"<<endl;
    float a, b, c;
    cout<<"Enter a: "<<endl;
    cin>>a;
    cout<<"Enter b: "<<endl;
    cin>>b;
    cout<<"Enter c: "<<endl;
    cin>>c;
    const float delta = b*b - 4*a*c;

    if(delta <0){
        cout<<"No value that satisfied the function"<<endl;
    } else if(delta==0){
        float x = (-b)/(2.0*a);
        cout<<"X value is: "<<x<<endl;
    } else{
        float x1= (-b+pow(delta, 0.5))/(2*a);
        float x2= (-b-pow(delta, 0.5))/(2*a);
        cout<<"X1 value: "<<x1<<endl;
        cout<<"X2 value: "<<x2<<endl;
    }


    return 0;
}