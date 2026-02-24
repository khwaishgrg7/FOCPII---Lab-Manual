#include<iostream>

#include<string>

using namespace std;


class Employee{

public:

int empId;

string name;

double monthlysalary;


void inputdetails(){

cout<<"\nEnter EmpId: ";

cin>>empId;


cin.ignore(); 

cout<<"\nEnter Name: ";

getline(cin,name);


cout<<"\nEnter Monthly Salary: ";

cin>>monthlysalary;

}


double calculateAnnualsalary(){

return monthlysalary * 12;

}


void displayDetails(){

cout<<"\nEmpId: "<<empId;

cout<<"\nName: "<<name;

cout<<"\nMonthly Salary: "<<monthlysalary;

cout<<"\nAnnual Salary: "<<calculateAnnualsalary();

}

};


int main(){

Employee E1;

E1.inputdetails();

E1.displayDetails();


return 0;

}

