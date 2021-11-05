//
//  main.cpp
//  complex_number
//
//  Created by Macintosh HD on 04/11/2021.
//

#include "complex_number.hpp"

int main(int argc, const char * argv[]) {
    complex a;
    complex b;
    complex c;
    
    int choice=-1;
    
    do{
        cout<<"--------------- Complex number calculator ---------------"<<endl;
        cout<<"1. Enter data for complex number "<<endl;
        cout<<"2. Display complex number"<<endl;
        cout<<"3. Summary"<<endl;
        cout<<"4. Substraction"<<endl;
        cout<<"5. Multiplication"<<endl;
        cout<<"6. Division"<<endl;
        cout<<"7. Compare"<<endl;
        cout<<"Your choice: ";
        cin>>choice;
        cout<<endl;
        
        if(choice != 1){
            if(a.is_null_check() || b.is_null_check()){
                cout<<"Complex number is null"<<endl;
                continue;
            }
        } else if(choice==0){
            cout<<"Program is closing ..."<<endl;
            break;
        }
        switch (choice) {
            case 1:{
                cin>>a;
                cin>>b;
                break;
            }
            case 2:{
                cout<<a;
                cout<<b;
                break;
            }
            case 3:{
                c = a+b;
                cout<<c;
                break;
            }
            case 4:{
                c = a-b;
                cout<<c;
                break;
            }
            case 5:{
                c = a*b;
                cout<<c;
                break;
            }
            case 6:{
                c = a/b;
                cout<<c;
                break;
            }
            case 7:{
                cout<<a;
                cout<<"Compare with "<<endl;
                cout<<b;
                
                string temp = a>=b? "true": "false";
                cout<<"is >=: "<<temp<<endl;
                
                temp = a>b? "true": "false";
                cout<<"is >: "<<temp<<endl;
                
                temp = a<=b? "true": "false";
                cout<<"is <=: "<<temp<<endl;
                
                temp = a<b? "true": "false";
                cout<<"is <: "<<temp<<endl;
                
                temp = a==b? "true": "false";
                cout<<"is ==: "<<temp<<endl;
                
                temp = a!=b? "true": "false";
                cout<<"is !=: "<<temp<<endl;
            }
                break;
            default:
                cout<<"Invalid choice !"<<endl;
                break;
        }
    } while(choice);
    return 0;
}
