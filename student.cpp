#include<iostream>
#include<string>
using namespace std;

struct student{
    int roll;
    string name;
    float SGPA;
    string add;
};

int main(){
    student s[5];
    for(int i=0; i< 2; i++){
        cout<<"Enter roll number of student "<<i+1<<" : ";
        cin>>s[i].roll;
       // cout<<"Enter name of student: ";
        getline(cin,s[i].name);
        cout<<"Enter SGPA OF STUDENT "<<i+1<<" : ";
        cin>>s[i].SGPA;
        //cout<<"Enter add of student: ";
        getline(cin,s[i].add);
    }
    

    for(int i=0; i<2; i++){
        cout<<"Roll of student: "<<s[i].roll<<endl;
        cout<<"Name of student: "<<s[i].name<<endl;
        cout<<"SGPA OF student: "<<s[i].SGPA<<endl;
        cout<<"add of student: "<<s[i].add<<endl;    

    }
    return 0;
}
