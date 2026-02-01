#include<iostream>
using namespace std;

int main(){
    int n;
    int max=0,num;

    cout<<"enter how many numbers:";
    cin>>n;

    for(int i=1;i<=n;i++){
        cout<<"enter the value;";
        cin>>num; 

        if(num>max)
        max=num;
    }
cout<<"largest no="<<max;

return 0;
}


