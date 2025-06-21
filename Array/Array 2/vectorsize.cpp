#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(5); //size 5
    vector<int> v1(5,7);// size 5 and all elements are initialized to 7
    cout<<v.size()<<endl; //size of the vector is 5
    cout<<v.capacity()<<endl;//capacity of the vector is also 5
    return 0;
}