#include<iostream>
using namespace std;
int combination(int n,int r){
    int nfact=1;
    int rfact=1;
    int nrfact=1;
    int c=n-r;
    for(int i=2;i<=n;i++){
        nfact*=i;
    }
    for(int i=2;i<=r;i++){
        rfact*=i;
    }
    for(int i=2;i<=c;i++){
        nrfact*=i;
    }
    int comb=nfact/(rfact*nrfact);
    return comb;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout<<combination(i,j)<<" ";
        }
        cout<<endl;
    }
}