#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no of elements in the array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the element:";
        cin>>arr[i];
    }
    int product=1;
    for(int i=0;i<n;i++){
        product*=arr[i];
    }
    cout<<"The product of the array is:"<<product<<endl;
    return 0;
}