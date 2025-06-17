#include<iostream>
using namespace std;
int main(){
    int x=10;
    int y=19;
    int *p1=&x;
    int *p2=&y;
    cout<<*p1+*p2<<endl;

    int a,b;
    int *a1=&a;
    int *b1=&b;
    cout<<"Enter the value of a and b";
    cin>>*a1;
    cin>>*b1;
    cout<<"The sum is "<<*a1+*b1;
    return 0;

}