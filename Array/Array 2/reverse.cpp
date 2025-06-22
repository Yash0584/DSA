#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cout<<"Enter element:";
        cin>>x;
        v.push_back(x);
    }
    cout<<endl;
    cout<<"Elements:"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    int i=0;
    int j=v.size()-1;
    while(i<=j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;

    }

 cout<<"Elements:"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}