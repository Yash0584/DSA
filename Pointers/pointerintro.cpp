#include<iostream>
using namespace std;
int main(){
    int x=4;    //int variable require int pointer variable to store its address
    int* p=&x;   //* is a pointer variable and & is an address operator
    cout<<&x<<endl; //&x give the address of the variable x
    cout<<p<<endl; //p gives the value of the pointer variable which is the address of x 
    cout<<*p;// *p gives the value stored in that address i.e. the value of x
    
    //Dereference operator= * operator
    return 0;
}