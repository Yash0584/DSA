#include<iostream>
#include<vector>
using namespace std;
vector<int> merge(vector<int> &arr1,vector<int> &arr2){
    int n=arr1.size();
    int m=arr2.size();
    vector<int> res(n+m);
    int i=0;
    int j=0;
    int k=0;
    while(i<=n && j<=m){
        if(arr1[i]<arr2[j]){
            res[k]=arr1[i]; 
            i++;
        }
        else{
            res[k]=arr2[j];
            j++;
        }
        k++;
    }
    //for remaining elements
    if(i==n){
        while(j<=m-1){
            res[k]=arr2[j];
            k++;
            j++;
        }
    }
    if(j==m){
        while(i<=n-1){
            res[k]=arr1[i];
             k++;
            i++;
           
        }
    }
    return res;
}
int main(){
    vector<int> v1;
   vector<int> v2;
    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(5);
    v1.push_back(8);
    v2.push_back(2);
    v2.push_back(4);
    v2.push_back(6);
    v2.push_back(7);
    v2.push_back(9);
    v2.push_back(10);
    //int n=v1.size()+v2.size();
    vector<int> v=merge(v1,v2);
      for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
}
    
}