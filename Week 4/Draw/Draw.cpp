//
//  Draw.cpp
//  Draw
//
//  Created by Macintosh HD on 22/10/2021.
//

#include "Draw.hpp"
Draw::Draw(){
    this->_h = 1;
}

Draw::Draw(int h){
    if (h<1) {
        set_h();
    } else{
        this->_h = h;
    }
}

void Draw::set_h(){
    do{
        cout<<"Input h : ";
        cin>>this->_h;
    } while(this->_h<1);
}

void Draw::print_asterisk(int n){
    for (int i=0; i<n; i++) {
        cout<<"*\t";
    }
}

void Draw::print_tab(int n){
    for (int i=0; i<n; i++) {
        cout<<"\t";
    }
}

void Draw::draw_1(){
    for (int i=1; i<this->_h; i++) {
        print_asterisk(i);
        print_tab(1+2*(this->_h-i-1));
        print_asterisk(i);
        cout<<endl;
    }
    print_asterisk(1+2*(this->_h-1));
    cout<<endl;
    for (int i=this->_h-1; i>0; i--) {
        print_asterisk(i);
        print_tab(1+2*(this->_h-i-1));
        print_asterisk(i);
        cout<<endl;
    }
}

void Draw::draw_2(){
    int temp = 1+2*(this->_h-1);
    int mid = temp/2;
    print_asterisk(temp);
    cout<<endl;
    for (int i=1; i<mid; i++) {
        print_tab(i);
        print_asterisk(1);
        print_tab(temp-2-2*i);
        print_asterisk(1);
        print_tab(i);
        cout<<endl;
    }
    print_tab(mid);
    print_asterisk(1);
    print_tab(mid);
    cout<<endl;
    for (int i=mid-1; i>0; i--) {
        print_tab(i);
        print_asterisk(1);
        print_tab(temp-2-2*i);
        print_asterisk(1);
        print_tab(i);
        cout<<endl;
    }
    cout<<endl;
    print_asterisk(temp);
    cout<<endl;
}

void Draw::draw_3(){
    for(int i=1; i<=_h; i++){
        for(int j=1; j<=i; j++){
        cout<<j+i-1;
}
    cout<<endl;
}
    for(int i=_h; i>=1; i--){
        for(int j=1; j<i; j++){
        cout<<j+i-2;
}
    cout<<endl;
}}

void Draw::print_number(int start, int time){
    int temp = 1;
    while (temp<=time) {
        cout<<start<<"\t";
        start+=2;
        temp++;
    }
}

void Draw::draw_4(){
    int temp = 1+2*(this->_h-1)+2;
    for (int i=1; i<_h; i++) {
        print_tab(i);
        print_number(i, temp-2*i);
        cout<<endl;
    }
    print_tab(_h);
    cout<<_h<<endl;
    for (int i=_h-1; i>0; i--) {
        print_tab(i);
        print_number(temp-i-1, temp-i*2);
        cout<<endl;
    }
}
