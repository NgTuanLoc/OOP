//
//  mul_table.cpp
//  multiplication_table
//
//  Created by Macintosh HD on 12/10/2021.
//

#include "mul_table.hpp"
mul_table::mul_table(){
    m = 2;
    n = 3;
}

mul_table::mul_table(int n_input){
    if (!check_input(2, n_input)) {
        set();
    } else{
        this->m = 0;
        this->n = n_input;
    }
}

mul_table::mul_table(int m_input, int n_input){
    if (!check_input(m_input, n_input)) {
        set();
    } else{
        this->m = m_input;
        this->n = n_input;
    }
}

bool mul_table::check_input(int m_input, int n_input){
    if (m_input>=n_input || m_input<2 || m_input>9 || n_input<2 || n_input>9) {
        cout<<"\nInput valid input"<<endl;
        return false;
    }
    return true;
}

void mul_table::set(){
    do{
        cout<<"Input m: ";
        cin>>m;
        cout<<"\nInput n: ";
        cin>>n;
        cout<<endl;
    } while(!check_input(m, n));
}

void mul_table::display(){
    cout<<"Display multiplication table"<<endl;s
    cout<<"m = "<<m<<endl;
    cout<<"n = "<<n<<endl;
}

void mul_table::show_table_from_m(){
    for (int i =1; i<=10; i++) {
        cout<<m<<setw(max_width)<<"x"<<setw(max_width)<<i<<setw(max_width)<<"= "<<m*i<<endl;
    }
}

void mul_table::show_table_from_m_to_n(){
    for (int i=m; i<=n; i++) {
        cout<<"---------------------multiplication table of "<<i<<" ---------------------"<<endl;
        for (int j =1; j<=10; j++) {
            cout<<i<<setw(max_width)<<"x"<<setw(max_width)<<j<<setw(max_width)<<"= "<<i*j<<endl;
        }
        
    }
}

void mul_table::show_all_table(){
    for (int i=2; i<=9; i++) {
        cout<<"---------------------multiplication table of "<<i<<" ---------------------"<<endl;
        for (int j =1; j<=10; j++) {
            cout<<i<<setw(max_width)<<"x"<<setw(max_width)<<j<<setw(max_width)<<"= "<<i*j<<endl;
        }
        
    }
}
