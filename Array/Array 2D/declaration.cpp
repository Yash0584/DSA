#include<iostream>
using namespace std;
int main(){
    int arr[3][3];
    arr[0][0];
    cout<<arr[0][0]<<endl;
    arr[0][0]=4;
    cout<<arr[0][0]<<endl;
    int arrr[3][3]={{1,2,3}, {4,5,6} ,{7,8,9}};
    cout<<endl<<arrr[0][0];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arrr[i][j]<<" ";
        }
        cout<<endl;
    }
}