//
//  main.cpp
//  CString
//
//  Created by Macintosh HD on 05/11/2021.
//

#include "CString.hpp"

int main(int argc, const char * argv[]) {
    CString a;
    CString b;
    CString c;
    
    int choice=-1;
    
    do{
        cout<<"--------------- CString calculator ---------------"<<endl;
        cout<<"1. Enter data for CString "<<endl;
        cout<<"2. Display CString"<<endl;
        cout<<"3. Concatenation"<<endl;
        cout<<"4. Compare String"<<endl;
        
        cout<<"Your choice: ";
        cin>>choice;
        cout<<endl;
        
        if(choice==0){
            cout<<"Program is closing ..."<<endl;
            break;
        }
        switch (choice) {
            case 1:{
                cin.ignore();
                
                cout<<"Enter string a : ";
                cin>>a;
                
                cout<<"\nEnter string b: ";
                cin>>b;
                cout<<endl;
                break;
            }
            case 2:{
                cout<<a<<endl;
                cout<<b<<endl;
                break;
            }
            case 3:{
                c = a+b;
                cout<<c<<endl;
                break;
            }
            
            case 4:{
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
