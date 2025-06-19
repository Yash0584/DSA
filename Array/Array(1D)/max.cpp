#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements in array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the elements:";
        cin>>arr[i];
    }
    int large=INT_MIN;
    for(int i=0;i<n;i++){
        if(large<arr[i]){
            large=arr[i];
        }
}
cout<<endl<<"The largest element is:"<<large;
}