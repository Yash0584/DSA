#include<iostream>
#include<vector>
using namespace std;
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    vector<int> v;
    v.push_back(2);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(2);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
cout<<endl;
cout<<"Array before sorting: "<<endl;
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
cout<<endl;
int n=v.size();
int low=0;
int mid=0;
int high=n-1;
while(mid<=high){
    if(v[mid]==2){
        swap(&v[mid],&v[high]);
        high--;
}
if(v[mid]==0){
 swap(&v[mid],&v[low]);
 low++;
 mid++;
}
if(v[mid]==1){
    mid++;
}
}
cout<<endl;
cout<<"Array after sorting:"<<endl;
for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
}
}