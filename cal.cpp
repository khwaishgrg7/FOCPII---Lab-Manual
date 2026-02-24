#include<iostream>

#include<string>

using namespace std;


class Rectangle {

public:

float length;

float width;


void inputDimension() {

length = 7;

width = 8;

}


float calculateArea() {

return length * width;

}


float calculatePerimeter() {

return 2 * (length + width);

}


void displayResult() {

cout << "Length = " << length << endl;

cout << "Width = " << width << endl;

cout << "Area = " << calculateArea() << endl;

cout << "Perimeter = " << calculatePerimeter() << endl;

}

};


int main() {

Rectangle R1;


R1.inputDimension();

R1.displayResult();


return 0;

}

