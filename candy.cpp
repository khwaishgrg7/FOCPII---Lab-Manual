#include<iostream>
#include<string>
using namespace std;

class candy{
string colour;
int points;

public:
candy();
candy(string clr);
candy(string clr,int pts);
void setcandy(string,int);
void displaycandy();
};
candy::candy(){
    colour="black"; points=0;
}
candy::candy(string clr)
{
    colour=clr;points=0;
}
candy::candy(string clr,int pts)
{
    colour=clr;points=pts;
}

void candy:: setcandy(string c,int p){
   colour=c;points=p;
}
void candy:: displaycandy(){
    cout<<"\ncolour:"<<colour;
    cout<<"\n points :"<<points;
}
int main(){
    candy c1,c2("red",30);
    //.setcandy("red" ,35);
    //c2.setcandy("blue",45);
    c2.displaycandy();
    c1.displaycandy();
return 0;
}