#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> v;
v.push_back(-2);
v.push_back(1);
v.push_back(6);
v.push_back(-6);
v.push_back(12);
v.push_back(-1);
v.push_back(12);
v.push_back(20);
v.push_back(-12);
v.push_back(2);
cout<<"Array before sorting:"<<endl;
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
cout<<endl;
int neg=0;
int pos=0;
int i=0;
while(i<v.size()){
if(v[i]<0) neg++;
else pos++;    
i++;
}
cout<<"Number of negative number:"<<neg<<endl;
cout<<"Number of positive number:"<<pos<<endl;
int j=0;
int k=v.size()-1;
while(j<k){
if(v[j]>0 && v[k]<0){
    int temp=v[j];
    v[j]=v[k];
    v[k]=temp;
    j++;
    k--;
}    
if(v[j]<0){
    j++;
}
if(v[k]>0){
    k--;
}
}
cout<<endl;
cout<<"Array after arranging negative numbers first:"<<endl;
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
}