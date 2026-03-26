#include<iostream>
using namespace std;
class Academic{
    public:
int marks;
void getmarks(){
    cout<<"\n Enetr marks :";
    cin>>marks;
}
};
class Sports{
    public:
int score;

void getscore(){
    cout<<"\n Enter score :";
    cin>>score;
}
};
class Result: public Academic, public Sports{
    public:
    void display(){
    cout<<"\n Acedemics marks:"<<marks;
    cout<<"\n Sports score:"<<score;
}
};
int main(){
    Result r;
    r.getmarks();
    r.getscore();
   r.display();
   return 0;
}