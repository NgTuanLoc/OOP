//
//  main.cpp
//  CDate
//
//  Created by Macintosh HD on 05/11/2021.
//

#include "CDate.hpp"

int main(int argc, const char * argv[]) {
    CDate a;
    int b;
    
    int choice=-1;
    
    do{
        cout<<"--------------- CDate calculator ---------------"<<endl;
        cout<<"1. Enter data for CDate "<<endl;
        cout<<"2. Display CDate"<<endl;
        cout<<"3. Summary"<<endl;
        cout<<"4. Substraction"<<endl;
        cout<<"5. Increase"<<endl;
        cout<<"6. Decrease"<<endl;
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
                break;
            }
            case 2:{
                cout<<a;
                break;
            }
            case 3:{
                cout<<"Input number : ";
                cin>>b;
                cout<<endl;
                a+b;
                cout<<a;
                break;
            }
            case 4:{
                cout<<"Input number : ";
                cin>>b;
                cout<<endl;
                a-b;
                cout<<a;
                break;
            }
            case 5:{
                ++a;
                cout<<a;
                break;
            }
            case 6:{
                --a;
                cout<<a;
                break;
            }
            default:
                cout<<"Invalid choice !"<<endl;
                break;
        }
    } while(choice);
    return 0;
}
