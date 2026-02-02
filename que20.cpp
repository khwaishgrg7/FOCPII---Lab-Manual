//part1 
/*#include<iostream>

using namespace std;


int main(){


for(int i=1;i<=3;i++){

for(int j=1;j<=5;j++){

cout<<j<<"";}
cout<<"\n";
}

return 0;

}*/











//part2

#include<iostream>
using namespace std;

int main(){
    int j;
    for(int i=1;i<=5;i++){
        for (int j = 5; j >= i; j--) {
            cout << j<<"";
        }
    cout<<endl;
    }
return 0;
}