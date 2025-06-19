#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements in the array:";
    cin>>n;
    int sum=0;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the element:";
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<"Sum of elements:"<<sum;
return 0;
}