#include<iostream>
#include<vector>
using namespace std;
//void change(vector<int> v){  //vectors are passed by value
void change(vector<int> &v){ // pass by reference  
v[0]=11;
     for(int i=0;i<v.size();i++){
        cout<<v[i]<<" "<<endl;
}
}
int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
}
cout<<endl;
change(v);
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
cout<<endl;
}