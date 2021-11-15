//
//  CMatrix.cpp
//  CMatrix
//
//  Created by Macintosh HD on 05/11/2021.
//

#include "CMatrix.hpp"

cmatrix::cmatrix(){
    _row = 1;
    _col = 1;
    _m[_row][_col] = 0;
}

cmatrix::cmatrix(int row, int col){
    while (row <1||col<1) {
        cout<<"Invalid cmatrix size"<<endl;
        
        cout<<"Number of row: ";
        cin>>_row;
        cout<<"\nNumber of col: ";
        cin>>_col;
        cout<<endl;
    }
    
    _row = row;
    _col = col;
    
    for (int i=0; i<row; i++) {
        for (int j=0; j<col; j++) {
            _m[i][j] = 0;
        }
    }
}

bool cmatrix::check_valid_size(){
    return _col*_row<1 ? false: true;
}

istream& operator>>(istream& in, cmatrix &m){
    
    do{
        cout<<"Number of row: ";
        in>>m._row;
        cout<<"\nNumber of col: ";
        in>>m._col;
        cout<<endl;
        if (!m.check_valid_size()) {
            cout<<"Invalid cmatrix size"<<endl;
        }
    }while(!m.check_valid_size());
        
    
    for (int i=0; i<m._row; i++) {
        for (int j=0; j<m._col; j++) {
            cout<<"Input cmatrix["<<i<<"]["<<j<<"]: ";
            in>>m._m[i][j];
            cout<<endl;
        }
    }
    return in;
}

ostream& operator<<(ostream& out, cmatrix m){
    for (int i=0; i<m._row; i++) {
        for (int j=0; j<m._col; j++) {
            out<<m._m[i][j]<<" ";
        }
        cout<<endl;
    }

    
    return out;
}

void cmatrix::operator=(cmatrix m){
    for (int i=0; i<m._row; i++) {
        for (int j=0; j<m._col; j++) {
            _m[i][j] = m._m[i][j];
        }
    }
}

cmatrix operator *(cmatrix a, cmatrix b){
    cmatrix c(a._row, b._col);
    if(a._col != b._row){
        cout<<"column of cmatrix A must equal to row of cmatrix B"<<endl;
        cout<<"Got "<<a._col<<"!="<<b._row<<" instead !"<<endl;
        return c;
    }

    
    for (int i=0; i<c._row; i++) {
        for (int j=0; j<c._col; j++) {
            for(int k=0; k<a._col; k++){
                c._m[i][j]+= a._m[i][k] * b._m[k][j];
            }
        }
    }
    
    return c;
}

//cmatrix operator *(cmatrix a, cvector b){
//    
//    cmatrix c(a._row, 1);
//    if(a._col != b._size){
//        cout<<"column of cmatrix A must equal to size of vector B"<<endl;
//        cout<<"Got "<<a._col<<"!="<<b._size<<" instead !"<<endl;
//        return c;
//    }
//        
//    for (int i=0; i<c._row; i++) {
//        for (int j=0; j<c._col; j++) {
//            for(int k=0; k<a._col; k++){
//                c._m[i][j]+= a._m[i][k] * b._n[k];
//            }
//        }
//    }
//    
//    return c;
//}


