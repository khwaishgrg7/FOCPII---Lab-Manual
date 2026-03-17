#include<iostream>
#include<string>
using namespace std;

class Product{
private:
string productName;
int price;
int Quantity;
public:
float totalCost;
Product();
Product(string n,int Q,int P);
~Product();
};
Product::Product(){
    productName="onion";
    price=7;
    Quantity=5;
    totalCost=price*Quantity;
    cout<<"\n PRODUCT IS:"<<productName;
    cout<<"\n PRICE IS:"<<price;
    cout<<"\n QUANTITY IS:"<<Quantity;
    cout<<"\n TOTAL COST IS:"<<totalCost;
}
Product::Product(string n,int Q,int P){
   productName=n;
    price=P;
    Quantity=Q;
    totalCost=price*Quantity;
    cout<<"\n PRODUCT IS:"<<productName;
    cout<<"\n PRICE IS:"<<price;
    cout<<"\n QUANTITY IS:"<<Quantity;
    cout<<"\n TOTAL COST IS:"<<totalCost;
}
Product::~Product(){
    cout<<"\n object destroyed";
}
int main(){
    Product();
    Product("onion",5,8);
    return 0;
}