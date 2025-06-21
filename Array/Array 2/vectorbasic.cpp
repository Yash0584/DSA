#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v; //you need not mention size;
    //inserting or input do not use []
    v.push_back(10);
    cout<<"Size:"<<v.size()<<endl;
    cout<<"Capacity:"<<v.capacity()<<endl;
    //v[1]=5;//it give garbage value at the end of array 
    v.push_back(20);
    cout<<"Size:"<<v.size()<<endl;
    cout<<"Capacity:"<<v.capacity()<<endl;
    v.push_back(30);
    cout<<"Size:"<<v.size()<<endl;
    cout<<"Capacity:"<<v.capacity()<<endl;
    v.push_back(40);
    cout<<"Size:"<<v.size()<<endl;
    cout<<"Capacity:"<<v.capacity()<<endl;
    
    //v[0]=6; //this will throw an error because v is empty
    // if you want to update / access you ca use []
    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<" ";
}