#include<iostream>
#include<string>
using namespace std;

class mobile{
public:
string brand;
int price;
float storage;

mobile(string B);
mobile(string B,int P);
mobile(string B,int P, float S);
void displayDetails();
};
mobile::mobile(string B){
    brand = B;
}
mobile::mobile(string B,int P){
    brand=B;
    price=P;
}
mobile::mobile(string B,int P,float S){
    brand=B;
    price=P;
    storage=S;
}
void mobile::displayDetails(){
    cout<<"\n BRAND IS:"<<brand;
    cout<<"\n price IS:"<<price;
    cout<<"\n strorage IS:"<<storage<<"gb";
}
int main(){
    mobile m1("apple"),m2("android",55),m3("oppo",43,128.5);
    m1.displayDetails();
    m2.displayDetails();
    m3.displayDetails();
    return 0;
}

