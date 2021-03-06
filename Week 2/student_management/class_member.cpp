//
//  class_member.cpp
//  student_management
//
//  Created by Macintosh HD on 28/09/2021.
//

#include "class_member.hpp"
#include "student.hpp"

void set_student_list(cm &class_list){
    do{
        cout<<"Number of students in class: ";
        cin>>class_list.number_of_member;
        if (class_list.number_of_member>50)
        {
            cout<<"Number of member must smaller or equal to 50"<<endl;
        }
        
        cout<<endl;
    } while (class_list.number_of_member>50);
    
    for (int id = 0; id < class_list.number_of_member; id++)
    {
        set_student(class_list.student_list[id], id);
    }
    class_list.is_null=false;
}

void output_student_list(cm class_list){
    cout<<"Class's members list"<<endl;
    cout<<"ID"<<setw(width) << setfill(separator)<<"Name"<<setw(width) << setfill(separator)<<"Math score"<<setw(width) << setfill(separator)<<"Literature"<<setw(width) << setfill(separator)<<"Status"<<setw(width) << setfill(separator)<<"Scholarship"<<endl;
    for (int id = 0; id < class_list.number_of_member; id++)
    {
        output_student(class_list.student_list[id]);
    }    
}

void output_poor_status_student(cm class_list){
    cm poor_status_student_class_list;
    for (int i = 0; i < class_list.number_of_member; i++)
    {
        if (!class_list.student_list[i].status.compare("poor"))
        {
            poor_status_student_class_list.student_list[poor_status_student_class_list.number_of_member] = class_list.student_list[i];
            poor_status_student_class_list.number_of_member += 1;
        }
    }
    output_student_list(poor_status_student_class_list);
}

int count_average_status_student(cm class_list){
    int number_of_average_status_student=0;
    for (int i = 0; i < class_list.number_of_member; i++)
    {
        if (!class_list.student_list[i].status.compare("average"))
        {
            number_of_average_status_student++;
        }
        
    }
    return number_of_average_status_student;
}

int count_excellent_scholarship(cm class_list){
    int number_of_excellent_scholarship_student=0;
    for (int i = 0; i < class_list.number_of_member; i++)
    {
        if (!class_list.student_list[i].scholar.compare("2M VND scholarship"))
        {
            number_of_excellent_scholarship_student++;
        }
        
    }
    return number_of_excellent_scholarship_student;
}

float get_average_score_of_very_good_status_student(cm class_list){
    float average_score_of_very_good_status_student = 0;
    int number_of_very_good_status_student = 0;
    for (int i = 0; i < class_list.number_of_member; i++)
    {
        if (!class_list.student_list[i].status.compare("very good"))
        {
            number_of_very_good_status_student++;
            average_score_of_very_good_status_student = get_student_avg_score(class_list.student_list[i]);
        }
        
    }
    return average_score_of_very_good_status_student/number_of_very_good_status_student;
}

string check_poor_status_student(cm class_list){
    for (int i = 0; i < class_list.number_of_member; i++)
    {
        if (!class_list.student_list[i].status.compare("poor"))
        {
            return "true";
        }
    }
    return "false";
}

void sort_student_list_by_scholar(cm &class_list){
    int number_of_scholarship_type = 3;
    string type_of_scholarship[3] = {"null", "1M VND scholarship", "2M VND scholarship"};
    cm temp;
    int temp_index=0;
    while (number_of_scholarship_type!=0) {
        number_of_scholarship_type--;
        for (int i=0; i<class_list.number_of_member; i++) {
            if (!type_of_scholarship[number_of_scholarship_type].compare(class_list.student_list[i].scholar)) {
                temp.student_list[temp_index] = class_list.student_list[i];
                temp_index++;
            }
        }
    }
    for (int i=0; i<class_list.number_of_member; i++){
        class_list.student_list[i] = temp.student_list[i];
    }
}

void search_student(cm class_list){
    int choice;
    cout<<"1. Search by id"<<endl;
    cout<<"2. Search by name"<<endl;
    cout<<"3. Search by average score"<<endl;
    cout<<"4. Search by scholarship"<<endl;
    cin>>choice;
    cout<<endl;
    
    switch (choice) {
        case 1:
            search_student_by_id(class_list);
            break;
        case 2:
            search_student_by_name(class_list);
            break;
        case 3:
            search_student_by_avg_score(class_list);
            break;
        case 4:
            search_student_by_scholarship(class_list);
            break;
        default:
            cout<<"Invalid choice"<<endl;
            break;
    }
}

void search_student_by_id(cm class_list){
    int id;
    bool notFound=true;
    cout<<"Enter student's id: ";
    cin>>id;
    cout<<endl;
    cout<<"ID"<<setw(width) << setfill(separator)<<"Name"<<setw(width) << setfill(separator)<<"Math score"<<setw(width) << setfill(separator)<<"Literature"<<setw(width) << setfill(separator)<<"Status"<<setw(width) << setfill(separator)<<"Scholarship"<<endl;
    for (int i=0; i<class_list.number_of_member; i++) {
        if(class_list.student_list[i].id==id){
            output_student(class_list.student_list[i]);
            notFound = false;
        }
    }
    if (notFound) {
        cout<<"Student Not Foud "<<endl;
    }
}

void search_student_by_name(cm class_list){
    string name;
    bool notFound=true;
    cin.ignore();
    cout<<"Enter student's name: ";
    getline(cin, name);
    cout<<endl;
    cout<<"ID"<<setw(width) << setfill(separator)<<"Name"<<setw(width) << setfill(separator)<<"Math score"<<setw(width) << setfill(separator)<<"Literature"<<setw(width) << setfill(separator)<<"Status"<<setw(width) << setfill(separator)<<"Scholarship"<<endl;
    for (int i=0; i<class_list.number_of_member; i++) {
        if(!class_list.student_list[i].name.compare(name)){
            output_student(class_list.student_list[i]);
            notFound = false;
        }
    }
    if (notFound) {
        cout<<"Student Not Foud "<<endl;
    }
}
void search_student_by_avg_score(cm class_list){
    float avg_score;
    bool notFound=true;
    cout<<"Enter student's average score: ";
    cin>>avg_score;
    cout<<endl;
    cout<<"ID"<<setw(width) << setfill(separator)<<"Name"<<setw(width) << setfill(separator)<<"Math score"<<setw(width) << setfill(separator)<<"Literature"<<setw(width) << setfill(separator)<<"Status"<<setw(width) << setfill(separator)<<"Scholarship"<<endl;
    for (int i=0; i<class_list.number_of_member; i++) {
        if(get_student_avg_score(class_list.student_list[i])==avg_score){
            output_student(class_list.student_list[i]);
            notFound = false;
        }
    }
    if (notFound) {
        cout<<"Student Not Foud "<<endl;
    }
};

void search_student_by_scholarship(cm class_list){
    string scholarship;
    bool notFound=true;
    cin.ignore();
    cout<<"Enter student's scholarship: ";
    getline(cin, scholarship);
    cout<<endl;
    cout<<"ID"<<setw(width) << setfill(separator)<<"Name"<<setw(width) << setfill(separator)<<"Math score"<<setw(width) << setfill(separator)<<"Literature"<<setw(width) << setfill(separator)<<"Status"<<setw(width) << setfill(separator)<<"Scholarship"<<endl;
    for (int i=0; i<class_list.number_of_member; i++) {
        if(!class_list.student_list[i].scholar.compare(scholarship)){
            output_student(class_list.student_list[i]);
            notFound = false;
        }
    }
    if (notFound) {
        cout<<"Student Not Foud "<<endl;
    }
}
