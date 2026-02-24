#include<iostream>

#include<string>

using namespace std;


class Tempreature{

public:

float celsius;


void inputTemprature(){

cout<<"\nEnetr tem in celsius:";

cin>>celsius;

}

float converttoFahrenheit(){

return (celsius*9/5)+32;

}

void displayResult(){

cout<<"\n value in celsius:"<<celsius;

cout<<"\n value in Fahrenheit:"<<converttoFahrenheit();

}

};


int main(){

Tempreature T1;

T1.inputTemprature();

T1.displayResult();


return 0;

}

