#include<iostream>
using namespace std;
void printodd(int a,int b){
cout<<"Odd numbers between "<<a<<"and"<<b<<":"<<endl;
for(int i=a;i<=b;i++){
    if(i%2!=0){
        cout<<i<<"\t";
    }
}
}
int main(){
    int a,b;
    cout<<"Enter the starting and ending values:"<<endl;
    cin>>a>>b;
    printodd(a,b);
    return 0;
}