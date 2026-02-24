#include<iostream>

#include<string>

using namespace std;


class student{

public:

int rollNo;

string Name;

int marks1, marks2, marks3;


void inputDetails(){

cout<<"Enter Roll No: ";

cin>>rollNo;


cin.ignore(); 

cout<<"Enter Name: ";

getline(cin, Name);


cout<<"Enter 3 Marks: ";

cin>>marks1>>marks2>>marks3;

}


int calculatetotal(){

return marks1 + marks2 + marks3;

}


void displayDetails(){

cout<<"\nRoll No = " << rollNo;

cout<<"\nName = " << Name;

cout<<"\nMarks1 = " << marks1;

cout<<"\nMarks2 = " << marks2;

cout<<"\nMarks3 = " << marks3;

cout<<"\nTotal = " << calculatetotal();

}

};


int main(){

student s1;

s1.inputDetails();

s1.displayDetails();

return 0;

}