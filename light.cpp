#include<iostream>
#include<string>
using namespace std;

class light{
public:
string brand;
int brightness;
bool isOn;

light(){
    brand="unknown";
    isOn=0;
    brightness=50;
}
light(string b,int brigtht ,bool staus){

    brand=b;
    isOn=staus;
    brightness=brigtht;
}
void trunOn(){
isOn=true;
}
void turnOff(){
    isOn=false;
}
void increaseBrightness(){
    if (brightness < 100){
       brightness +=10;}
}
void decreaseBrightness(){
    if(brightness>100){
    brightness -=10;}

}
void displaybrightness(){
    cout<<"\n brand :"<<brand;
    cout<<"\n light is :"<<(isOn?"ON":"OFF");
    cout<<"\n brightness"<<brightness;
}
};

int main(){
    light l1;
    light l2("philis",70,true);
    l1.trunOn();
    l1.turnOff();
    l1.increaseBrightness();
    l1.displaybrightness();
    
    l2.trunOn();
    l2.trunOn();
    l2.decreaseBrightness();
    l2.displaybrightness();
    return 0;
}

