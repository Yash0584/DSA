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
int permutation(int n,int r){
int nfact=1;
int nrfact=1;
int c=n-r;
for(int i=2;i<=n;i++){
    nfact*=i;
    }
for(int i=2;i<=c;i++){
    nrfact*=i;
    
}
int perm=nfact/nrfact;
return perm;
}
int main(){
int n;
int r;
cout<<"Enter the value of n and r";
cin>>n>>r;
cout<<"Permutation="<<permutation(n,r)<<endl;
cout<<"Combination="<<combination(n,r)<<endl;
return 0;
}