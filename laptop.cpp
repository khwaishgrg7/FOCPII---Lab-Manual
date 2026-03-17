#include<iostream>
#include<string>
using namespace std;

class laptop{
public:
string Brand;
int RAM;
int Price;
void setDetails(string b){
Brand=b;
}
void setDetails(string b, int r){
    Brand=b;
    RAM=r;
}
void setDetails(string b, int r, int p){
    Brand=b;
    RAM=r;
    Price=p;
}
void displayDetails(){
    cout<<"\n brand is :"<<Brand;
    cout<<"\n ram is:"<<RAM;
    cout<<"\n price is"<<Price;
}
};
int main(){
    laptop l1,l2,l3;
    l1.setDetails("LENOVO");
    l1.displayDetails();
    l2.setDetails("HP",64000);
    l2.displayDetails();
    l3.setDetails("MACBOOK",71000,32);
    l3.displayDetails();
    return 0;
}