#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v1;
    int n;
    cout<<"Enter the size of the vector: ";
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cout<<"Enter the value:";
        cin>>x;
        v1.push_back(x);
    }
    cout<<"The elements:";
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    vector<int> v2(v1.size());
    for(int i=0;i<v2.size();i++){
        //i+j=v1.size()-1
        int j=v1.size()-1-i;
        v2[i]=v1[j];
    }
for(int i=0;i<v1.size();i++){
    cout<<v2[i]<<" ";
}

}