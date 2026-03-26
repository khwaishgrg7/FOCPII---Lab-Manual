#include<iostream>
using namespace std;
class Animal{
public:
void eat(){
    cout <<"\n animal is eatig ";
}
};
class dog: public Animal{
    public:
    void bark(){
cout<<"\n dog is barking";
    }
};
class Puppy: public dog{
public:
    void weep(){
cout<<"\n puppy is weeping ";
    }
};
int main(){
    Puppy p;
p.eat();
p.bark();
p.weep();
return 0;
}
