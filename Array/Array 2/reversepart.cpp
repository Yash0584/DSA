#include<iostream>
#include<vector>
using namespace std;
int  main(){
    int n;
    cout<<"Enter the size:";
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int a;
        cout<<"Enter the element:";
        cin>>a;
        v.push_back(a);

    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    int start,end;
    cout<<"Enter the start and end index:";
    cin>>start>>end;
    while(start<=end){
        int temp=v[start];
        v[start]=v[end];
        v[end]=temp;
        start++;
        end--;
    }
    cout<<endl;
    cout<<"Reverse part of the array:";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
}
}