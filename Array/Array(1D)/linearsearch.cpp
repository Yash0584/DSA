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
    bool flag=false;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            flag=true;
        }
    }
    if(flag==true){
        cout<<key<<" is present in array";
    }else{
        cout<<key<<" is not present in array";
    }
    return 0;
}