#include<iostream>
#include<string>
using namespace std;

struct employees{
    string name;
    string department;
    int ID;
    int salary;
};

int main(){
    employees E[10];
    int n;
    cout<<"How many employee: ";
    cin>>n;
    for(int i=0; i< n; i++){
        cout<<"Enter name of employee "<<i+1<<" : ";
        cin>>E[i].name;
        cout<<"Enter department of employee "<<i+1<<" : ";
        cin>>E[i].department;
        cout<<"Enter ID of employee "<<i+1<<" : ";
        cin>>E[i].ID;
        cout<<"Enter salary of employee "<<i+1<<" : ";
        cin>>E[i].salary;
    }
    
    int avg;

    for(int i=0; i<n; i++){
        cout<<"name of employee: "<<E[i].name<<endl;
        cout<<"department of employee: "<<E[i].department<<endl;
        cout<<"ID OF employee: "<<E[i].ID<<endl;
        cout<<"salary of employee: "<<E[i].salary<<endl;    
        avg=avg+E[i].salary;
    }
    cout<<"AVg salary of employees: "<<avg/n<<endl;
    return 0;
}
