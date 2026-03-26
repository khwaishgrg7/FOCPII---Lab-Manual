#include<iostream>
using namespace std;
class Employee{
public:
string Name;
float salary;
void getdata(){
    cout<<"\n name of employee:";
    cin>>Name;
    cout<<"\n salary of employee:";
    cin>>salary;
}
    void displayData(){
cout<<"\n name:"<<Name;
cout<<"\n salary:"<<salary;
    }
};
class Developer:public Employee{
public:
void displayRole(){
    cout<<"\n role:Devloper";
}
};
class Designer:public Employee{
    public:
    void displayRole(){
        cout<<"\n role:Designer";
    }
};
int main(){
    Developer d;
    Designer d1;
cout<<"\n devloper details";
    d.getdata();
    d.displayData();
    d.displayRole();
  cout<<"\n designer details"; 
    d1.getdata();
    d1.displayData();
    d1.displayRole();
    return  0;
}
