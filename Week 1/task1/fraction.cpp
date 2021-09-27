// Viết chương trình nhập vào một phân số, rút gọn phân số và xuất kết quả.
// Viết chương trình nhập vào hai phân số, tìm phân số lớn nhất và xuất kết quả.
// Viết chương trình nhập vào hai phân số. Tính tổng, hiệu, tích, thương giữa chúng và xuất kết quả.

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
      reduce_fraction(*this);
    }

    void get_fraction(){
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

int main(){
  Fraction a;
  Fraction b;
  a.set_fraction();
  a.get_fraction();
  b.set_fraction();
  b.get_fraction();

  Fraction c = a.add(b);
  c.get_fraction();

  Fraction d = a.sub(b);
  d.get_fraction();

  Fraction e = a.mul(b);
  e.get_fraction();
  Fraction f = a.div(b);
  f.get_fraction();
  return 0;
}