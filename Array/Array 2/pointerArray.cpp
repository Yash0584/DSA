#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4};
    int *ptr=arr; //giving address
   // int *ptr=&arr[0]; //giving address
    //int *ptr=&arr; //gives error
    ptr[0]=8;
    ptr++;
    *ptr=9;
    ptr--;

    cout<<ptr<<endl;
    cout<<ptr[0]<<endl;
for(int i=0;i<4;i++){
cout<<ptr[i]<<endl;
}
}