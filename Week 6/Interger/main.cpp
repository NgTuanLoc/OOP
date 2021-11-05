//
//  main.cpp
//  Interger
//
//  Created by Macintosh HD on 05/11/2021.
//

#include "interger.hpp"

int main(int argc, const char * argv[]) {
    interger a;
    interger b;
    interger c;
    
    int choice=-1;
    
    do{
        cout<<"--------------- Interger calculator ---------------"<<endl;
        cout<<"1. Enter data for Interger "<<endl;
        cout<<"2. Display fraction"<<endl;
        cout<<"3. Summary"<<endl;
        cout<<"4. Substraction"<<endl;
        cout<<"5. Multiplication"<<endl;
        cout<<"6. Division"<<endl;
        cout<<"7. Compare"<<endl;
        cout<<"Your choice: ";
        cin>>choice;
        cout<<endl;
        
        if(choice==0){
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
                cout<<endl;
                
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
