#include <iostream>
using namespace std;

class Thisopp {
int a1;
int a2;
int a3;
public:

Thisopp(){
    a1=0;
    a2=0;
    a3=0;
}
Thisopp(int a1,int a2,int a3){
this->a1=a1;
(*this).a2=a2;
a3=a3;

}
void display(){
    cout<<"\n a1= "<<a1<<"\n a2= "<<a2<<"\n a3 = "<<a3;
}
};
int main(){
    Thisopp obj1,obj2(23,67,90);
    obj1.display();
    obj2.display();
    return 0;
}