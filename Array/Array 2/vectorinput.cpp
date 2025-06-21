#include<iostream>
#include<vector>
using namespace std;
int main(){
   /*  vector<int> v(5);  // in this case input can be taken using this method because size of the vector is given to us if not given it will give segmentation fault
    for(int i=0;i<5;i++){
        cin>>v[i];
    } */
   vector<int> v;
   for(int i=0;i<5;i++){ // if we give v.size() it will give error 
    int x;
    cin>>x;
    v.push_back(x);
   }
   for(int i=0;i<5;i++){
    cout<<v[i]<<" ";
   }

}