#include<iostream>
using namespace std;
int main(){
    int x=10;
    int *p=&x;
    cout<<*p<<endl; //*p is dereference operator which gives the value of variable whose address is stored in pointer p.
    cout<<x<<endl;
    *p=6; //the value of x will be changed to 6 because we are changing the value at the memory location where x is present.
    cout<<x;
    return 0;
}