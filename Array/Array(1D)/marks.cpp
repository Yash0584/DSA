#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of students:"<<endl;
    cin>>n;
    int marks[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the marks of student:";
        cin>>marks[i];
    }
    for(int i=0;i<n;i++){
        if(marks[i]<=35){
            cout<<i+1<<"th student is fail"<<endl;
        }
}
return 0;
}