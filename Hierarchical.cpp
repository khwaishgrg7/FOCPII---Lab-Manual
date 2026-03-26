#include<iostream>
using namespace std;
class Shape{
public:
void draw(){
    cout<<"\n shapes drawn ";
}
};
class Circle: public Shape{
    public:
    void area(){
float r = 6;
 cout<<"\n area of circle is ="<<3.14*r*r;
    }
};
class Rectangle: public Shape{
public:
void area(){
    float l=5,b=8;
    cout<<"\n area of rectangle is ="<<l*b;
}
};
int main(){
    Circle c;
    Rectangle r;

    c.draw();
    c.area();

    r.draw();
    r.area();
return 0;
}
