#include<iostream>
using namespace std;
/*int main(){
    int n=3;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}*/
//Basic Function creation
/* void greeting(){                       //void=return type of function ,greeting=function name,()=arguments
cout<<"Good Morning"<<endl;  //Function Body
cout<<"Have a nice day"<<endl;

}
int main(){
    greeting(); //Function call
    greeting();
} */



void starTriangle(int n){   //starTriangle(int n)=here int n is the argument
for(int i=0;i<n;i++){
    for(int j=0;j<i+1;j++){
        cout<<"*";
    }
    cout<<endl;
}
}
int main(){
starTriangle(5);
starTriangle(7);
starTriangle(9);
}