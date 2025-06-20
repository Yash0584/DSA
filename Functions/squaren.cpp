#include<iostream>
using namespace std;
void sqaure(int n)
{
	int i=1;
	while(i<=n)
	{
		cout<<i*i<<" ";
		i++;
	}
}
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    sqaure(n);
    return 0;
}