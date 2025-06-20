#include<iostream>
using namespace std;
void countsqaure(int n){
    int num=n;
int count=0;
while(n>0){
    n=n/10;
    count++;
}
cout<<"The no of digits in the given number is:"<<count<<endl;
cout<<"The square of the number is:"<<num*num<<endl;
}
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    countsqaure(n);
    return 0;
}