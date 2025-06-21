#include<iostream>
using namespace std;
void display(int arr[]){
for(int i=0;i<5;i++){
    cout<<arr[i]<<" "<<endl;
}
}
void change(int b[]){
b[0]=100;
}
int main(){
    int arr[]={1,2,3,4,5};
    //accessing the elements of array in another function
    //updation,pass by value/reference
    display(arr);
    change(arr);
    display(arr);
    return 0;
}