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
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    int x=10;
    int idx=-1;
    /* for(int i=0;i<v.size();i++){
        if(v[i]==x){
            idx=i;
        }

}
cout<<idx; */  //Forward Iteration
for(int i=v.size()-1;i>=0;i--){
    if(v[i]==x){
        idx=i;
        break;
}

}
cout<<"Last Occurence of x is at index:"<<idx;
}