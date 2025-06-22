#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size:";
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cout<<"enter element:";
        cin>>x;
        v.push_back(x);
}
int k;
cout<<"Enter the step:";
cin>>k;
if(k>n){
    k=k%n;

 int start=0,end=n-k-1;
    while(start<=end){
        int temp=v[start];
        v[start]=v[end];
        v[end]=temp;
        start++;
        end--;
    }
cout<<"REVERSE PART BEFORE STEPS"<<endl;
for(int i=0;i<n;i++){
    cout<<v[i]<<" "<<endl;}
start=n-k;
end=n-1;
 
    while(start<=end){
        int temp=v[start];
        v[start]=v[end];
        v[end]=temp;
        start++;
        end--;
    }
cout<<"REVERSE PART AFTER STEPS"<<endl;
for(int i=0;i<n;i++){
    cout<<v[i]<<" "<<endl;}

 start=0;
 end=n-1;
    while(start<=end){
        int temp=v[start];
        v[start]=v[end];
        v[end]=temp;
        start++;
        end--;
    }
cout<<"FINAL REVERSE:"<<endl;
for(int i=0;i<n;i++){
    cout<<v[i]<<" "<<endl;}
}
}