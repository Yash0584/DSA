#include<iostream>
using namespace std;
/* Normal Method
int HCF(int a,int b){
    int hcf=1;
for(int i=1;i<min(a,b);i++){
    if(a%i==0 && b%i==0){ //i is a common factor
        hcf=i;
    }
}
return hcf;
}*/

//Optimise method
int HCF(int a,int b){
    int hcf=1;
for(int i=min(a,b);i>=1;i--){
if(a%i==0 && b%i==0){
    hcf=i;
    break;
}
}
return hcf;
}
int main(){
    int a,b;
    cout<<"Enter the two numbers"<<endl;
    cin>>a>>b;
    cout<<HCF(a,b);
}