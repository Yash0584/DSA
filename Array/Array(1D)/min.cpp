#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements you want in the array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the element:";
        cin>>arr[i];
}
int min=arr[0];
for(int i=0;i<n;i++){
    if(arr[i]<min){
        min=arr[i];
    }
}
cout<<"Minimum element:"<<min;
return 0;
}