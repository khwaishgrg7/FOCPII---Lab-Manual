#include<iostream>
using namespace std;

int main(){
    int n;

    cout<<"Enter the vlaue:";
    cin>>n;
    
if(n<=1){
    cout<<"not a prime no";
    return 0;
}

    for(int i=2;i<=n;i++){
        if(n % i==0 ){
cout<<"\n not a prime no";
        return 0; 
    }
    else
cout<<"its a prime no";
}
return 0;
}
