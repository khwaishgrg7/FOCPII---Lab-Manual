
#include <iostream>
using namespace std;

int main() {
    float a , b;
    int ch;  

            
cout << "\n1.Add  2.Sub  3.Mul  4.Div \n";
        cout << "Enter choice: ";
        cin >> ch;
 

    cout<<"enter two numbers:";
    cin>>a>>b;

    if(ch==1)
    cout<<"\nresult = "<<a+b;
    else if(ch==2)
    cout<<"\nresult = "<< a-b;
    else if(ch==3)
    cout<<"\nresult = "<<a*b;
    else if(ch==4)
    cout<<"\nresult = "<<a/b;
    else
    cout<<"wrong choice";

    return 0;
}