#include <iostream>
#include <string>
using namespace std;

class Student{
    private:
        string name;
        float lit_score; //literature_score
        float math_score;
        bool is_valid;
    public:
        Student(){
            name = "undefined";
            lit_score = 0;
            math_score = 0;
        }
        void input_student(){
            cout<<"Enter student's name: ";
            getline(cin, name);
            do{
                cout<<"\nEnter math score: ";
                cin>>math_score;
                if(math_score>10 || math_score<0){
                    cout<<"Error !!! Invalid input "<<endl;
                    is_valid=false;
                } else{
                    is_valid= true;
                }
            } while(!is_valid);

            do{
                cout<<"\nEnter literature score: ";
                cin>>lit_score;
                if(lit_score>10 || lit_score<0){
                    cout<<"Error !!! Invalid input "<<endl;
                    is_valid=false;
                } else{
                    is_valid = true;
                }
            } while(!is_valid);
            
            cout<<"\n-----------------------"<<endl;
        }

        string get_name(){
            return name;
        }

        float get_average_score(){
            return (lit_score+math_score)/2;
        }

};

int main(){
    Student hung;
    hung.input_student();
    cout<<hung.get_name()<<"'s average score: "<<hung.get_average_score()<<endl;
    return 0;
}