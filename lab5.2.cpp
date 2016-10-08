#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,k,f=1,f1=1,f2=1,C;
	cin>>n>>k;
	for(int i=1;i<=n;i++){
	f1=f1*i;}

	for(int i=1;i<=k;i++){
	f2=f2*i;}
	
	for(int i=1;i<=(n-k);i++){
	f=f*i;}
	C=f1/(f2*f);
	cout<<C<<endl;
return 0;
}
