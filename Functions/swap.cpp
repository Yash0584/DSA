#include<iostream>
using namespace std;
int main(){
    int a=5;
    int b=6;
    int temp;
    //swapping with temp
    temp=a;
    a=b;
    b=temp;
    cout<<"Swapping"<<endl;
    cout<<a<<" "<<b;
//swapping wtihout temp
int c=6;
int d=7;
c=c+d;
d=c-d;
c=c-d;
cout<<"\n Swapping without temp"<<endl;
cout<<c<<" "<<d;
return 0;
}