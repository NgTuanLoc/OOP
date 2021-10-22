//
//  main.cpp
//  Draw
//
//  Created by Macintosh HD on 22/10/2021.
//

#include "Draw.hpp"
void display_menu(int &choice){
    cout<<"------------- Find GCD & LCM -------------"<<endl;
    cout<<"1. Input "<<endl;
    cout<<"2. Draw 1 "<<endl;
    cout<<"3. Draw 2 "<<endl;
    cout<<"4. Draw 3 "<<endl;
    cout<<"5. Draw 4 "<<endl;
    cout<<"6. Output all "<<endl;
    cout<<"0. Shutdown !!! "<<endl;
    cout<<"-----------------------------------------------"<<endl;
    cout<<"Your choice: ";
    cin>>choice;
    cout<<endl;
}

int main(int argc, const char * argv[]) {
    Draw a;
    int choice = 1;
    
    do{
        display_menu(choice);
        
        switch (choice) {
            case 1:
                a.set_h();
                break;
            case 2:
                a.draw_1();
                break;
            case 3:
                a.draw_2();
                break;
            case 4:
                a.draw_3();
                break;
            case 5:
                a.draw_4();
                break;
            case 6:
                cout<<"Draw 1 "<<endl;
                a.draw_1();
                cout<<"Draw 2 "<<endl;
                a.draw_2();
                cout<<"Draw 3 "<<endl;
                a.draw_3();
                cout<<"Draw 4 "<<endl;
                a.draw_4();
                
            case 0:
                cout<<"Shutdown ..."<<endl;
                break;
            default:
                cout<<"Invalid choice"<<endl;
                break;
        }
    } while(choice);
    
    return 0;
}
