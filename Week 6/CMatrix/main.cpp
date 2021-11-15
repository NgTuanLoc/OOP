//
//  main.cpp
//  CMatrix
//
//  Created by Macintosh HD on 05/11/2021.
//
#include "CMatrix.hpp"
#include "CVector.hpp"

int main(int argc, const char * argv[]) {
    cmatrix mt_a;
    
    int choice = -1;

    do{
        cout<<"--------------- Matrix calculator ---------------"<<endl;
        cout<<"1. Enter data for Vector "<<endl;
        cout<<"2. Enter data for Matrix "<<endl;
        cout<<"3. Display Vector"<<endl;
        cout<<"4. Display Matrix"<<endl;
        cout<<"5. Multiplication Matrix vs Vector"<<endl;
        cout<<"6. Multiplication Matrix vs Matrix"<<endl;
        cout<<"Your choice: ";
        cin>>choice;
        cout<<endl;
        if (choice==0) {
            cout<<"Exiting Program ..."<<endl;
        }
        switch (choice) {
            case 1:
                
                break;
            case 2:
                cin>>mt_a;
                break;
            case 3:
                
                break;
            case 4:
                cout<<mt_a;
                break;
            case 5:
                
                break;
            case 6:{
                cmatrix mt_b;
                cin>>mt_b;
                cmatrix c = mt_a*mt_b;
                cout<<c;
            }
                break;
            default:
                break;
        }
    }while(choice);
    
    return 0;
}
