#include<iostream>
using namespace std;
class Employee{
    public:
string name;
void empName(){
    cout<<"\n Enter the name";
cin>>name;
}
};
class department{
    public:
string dept_name;
void empDeptName(){
    cout<<"\n enter the department  name:";
    cin>>dept_name;
}
};
class Manager :public Employee, public department{
    public:
    void display(){
        cout<<"\n Employee name: "<<name;
        cout<<"\n dept namee"<<dept_name;
    }
};
int main (){
    Manager M;
    M.empName();
    M.empDeptName();
    M.display();
    return 0;
}