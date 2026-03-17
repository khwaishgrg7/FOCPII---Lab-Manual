#include<iostream>
#include <string>
using namespace std;

class ElectricityBill{
    private:
    int units;
     float rate;
      float fixedCharge;
    public:

void calculateBill(int units){
        float total=units*5;
        cout<<"\n your bill is"<<total;
    }

void calculateBill(int units, float rate){
    float total=units*rate;
cout<<"\n your bill is:"<<total;
}

void calculateBill(int units, float rate, float fixedCharge){
    float total=(units*rate)+fixedCharge;
    cout<<"\n your bill is:"<<total;
}
};
int main(){
ElectricityBill E1,E2,E3;
E1.calculateBill(40);
E2.calculateBill(56,.9);
E3.calculateBill(42,.6,29);
return 0;
}