#include<iostream>
using namespace std;
void swap(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
    return;
}
void swapa(int &a,int &b){  //pass by reference
    int temp=a;
    a=b;
    b=temp;
    return;
}
int main(){
    int a=5,b=10;
    cout<<a<<" "<<b<<endl;
    swap(&a,&b); //passing the value of a and b to function by reference. So that we can change their values.
    cout<<a<<" "<<b<<endl;
    swapa(a,b);
    cout<<a<<" "<<b;
    return 0;
}