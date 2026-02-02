/*#include<iostream>
using namespace std;

int main(){
    int N;
    cout<<"Enter value of N:";
cin>>N;

for(int i=1;i<=N;i++){
    if(i % 3==0 && i % 5== 0){
        cout<<"\nBuzzFuzz";
    }
else if(i % 3==0){
    cout<<"\nBuzz";
}
else if(i % 5 == 0){
    cout<<"\nFuzz";

}
else{
    cout<<"\n"<<i;
} 
}
return 0;
} */

#include<iostream>

using namespace std;


int main(){

int N , i ;
cout<<"Enter value of N:";
cin>>N;



if(i % 3==0 && i % 5== 0){

cout<<"BuzzFuzz";

}

else if(i % 3==0){

cout<<"\nBuzz";

}

else if(i % 5 == 0){

cout<<"\nFuzz";


}

else{

cout<<"\n"<<i;

} 



return 0;

}