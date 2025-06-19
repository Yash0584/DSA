#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of elements you want:";
    cin>>n;
    int arr[n];
    int key;
    for(int i=0;i<n;i++){
        cout<<"Enter the number:";
        cin>>arr[i];
    }
    cout<<"enter the number to be searched:";
    cin>>key;
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]<key){
        count++;
        }
    }
    cout<<"The element "<<key<<" is greater than "<<count<<" numbers in the array.";
    return 0;
}