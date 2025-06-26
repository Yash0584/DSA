#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter the number of rows you want:";
    cin>>m;
    cout<<"Enter the number of columns you want:";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<"Enter the element:";
            cin>>arr[i][j];
        }
    }
    cout<<"Entered elements are:"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}