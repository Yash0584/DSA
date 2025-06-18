#include<iostream>
using namespace std;
int main(){
    int x=7;
    int *ptr=&x;
    cout<<ptr<<endl;
    ptr=ptr+1;
    cout<<ptr<<endl;
    bool flag=true;
    bool *p=&flag;
    cout<<p<<endl;
    p=p+1;
    cout<<p<<endl;
    int xx=5;
    int *pr=&xx;
    cout<<*pr<<endl;
    pr=pr+1;
    cout<<*pr<<endl;
}