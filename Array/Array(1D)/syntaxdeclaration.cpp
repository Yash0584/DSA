#include<iostream>
using namespace std;
int main(){
    int arr[7]={1,2,3,4,5,6,7}; // 0 1 2 3 4 5 6 indexes
    /* arr[0]=7;
    arr[1]=7;
    arr[2]=7;
    arr[3]=7;
    arr[4]=7;
    arr[5]=7;
    arr[6]=7; */
    cout<<arr[0]; //Output of a particular index
    //INPUT
    for(int i=0;i<7;i++){
        cin>>arr[i];
    }
    //OUTPUT
    for(int i=0;i<7;i++){
        cout<<arr[i]<<endl;// Output of all the elements in an array
    }
    return 0; 
}