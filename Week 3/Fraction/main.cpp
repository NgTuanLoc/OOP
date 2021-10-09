//
//  main.cpp
//  Fraction
//
//  Created by Macintosh HD on 02/10/2021.
//
//Thiết lập lớp PhanSo để biểu diễn khái niệm phân số với hai thành phần dữ liệu tử số, mẫu số và các hàm thành phần cộng, trừ, nhân, chia hai phân số, các hàm thành phần xuất, nhập, định giá trị cho phân số. Viết chương trình cho phép nhập vào hai phân số, in ra kết quả các phép toán cộng, trừ, nhân, chia hai phân số kể trên.

#include <iostream>
using namespace std;
// Fragtion = numerator/ denominator

class Fraction{
  private:
    int num; // numerator
    int den; // denominator
    bool isValid;
  public:
    Fraction(){
      num = 1;
      den = 1;
      isValid = false;
    }

    int gcd(int a, int b){
      a = a<0 ? -a: a;
      b = b<0 ? -b: b;

      if(a*b==0) return 1;

      while(a!=b && a*b!=0){
        if(a>b){
          a -= b;
        } else{
          b -= a;
        }
      }
      return a;
    }

    void reduce_fraction(Fraction &f){
      int temp = gcd(f.num, f.den);
      if(f.den < 0){
        f.num = -f.num/temp;
        f.den = -f.den/temp;
      } else{
        f.num = f.num/temp;
        f.den = f.den/temp;
      }
    }

    void set_fraction(){
      cout<<"Enter numerator for fraction: ";
      cin>>num;
      do{
        cout<<"Enter denominator for fraction: ";
        cin>>den;
        if (den != 0)
        {
          isValid = true;
        } else{
          isValid = false;
          cout<<"Error !!! Denominator is 0 !"<<endl;
        }
        cout<<"\n-------------------------------\n";
      } while(!isValid);
        isValid = true;
      reduce_fraction(*this);
    }

    void display_fraction(){
      if(den == 1 || num == 0){
        cout<<"Your fraction is: "<<num<<endl;
      } else{
        cout<<"Your fraction is: "<<num<<"/"<<den<<endl;
      }
    }

    Fraction add(Fraction f){
      cout<<"-----------SUM RESULT-----------"<<endl;
      Fraction result;
      result.num = num*f.den + den*f.num;
      result.den = den*f.den;
      reduce_fraction(result);
      return result;
    }

    Fraction sub(Fraction f){
      cout<<"-----------SUB RESULT-----------"<<endl;
      Fraction result;
      result.num = num*f.den - den*f.num;
      result.den = den*f.den;
      reduce_fraction(result);
      return result;
    }

    Fraction mul(Fraction f){
      cout<<"-----------MUL RESULT-----------"<<endl;
      Fraction result;
      result.num = num*f.num;
      result.den = den*f.den;
      reduce_fraction(result);
      return result;
    }
    Fraction div(Fraction f){
      cout<<"-----------DIV RESULT-----------"<<endl;
      Fraction result;
      result.num = num*f.den;
      result.den = den*f.num;
      reduce_fraction(result);
      return result;
    }
};

void display_menu(){
    cout<<"------------- Fraction Calculator -------------"<<endl;
    cout<<"1. Input data for fraction "<<endl;
    cout<<"2. Display fraction "<<endl;
    cout<<"3. Summary "<<endl;
    cout<<"4. Substraction "<<endl;
    cout<<"5. Multiplication "<<endl;
    cout<<"6. Division "<<endl;
    cout<<"-----------------------------------------------"<<endl;
}
int main(){
    int choice = -1;
    Fraction a;
    Fraction b;
    Fraction c;
    do{
        display_menu();
        cout<<"Your choice : ";
        cin>>choice;
        cout<<endl;
        if (choice ==0) {
            cout<<"System shutdown !!!"<<endl;
            break;
        }

        switch (choice) {
            case 0:
                cout<<"Exiting Program !!!"<<endl;
                break;
            case 1:
                a.set_fraction();
                b.set_fraction();
                break;
            case 2:
                a.display_fraction();
                b.display_fraction();
                break;
            case 3:
                c = a.add(b);
                c.display_fraction();
                break;
            case 4:
                c = a.sub(b);
                c.display_fraction();
                break;
            case 5:
                c = a.mul(b);
                c.display_fraction();
                break;
            case 6:
                c = a.div(b);
                c.display_fraction();
                break;
            default:
                cout<<"Invalid choice"<<endl;
                break;
        }
    } while(choice);
  
    
  
}

