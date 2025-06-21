#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v; //you need not mention size;
    //inserting or input do not use []
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.at(3)=90;
    cout<<v.at(3);
    cout<<endl;
   // sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}