#include <iostream>
using namespace std;
int main ()
{
	int n;
	cin>>n;
	int a[n];
	int counter=0;
	for(int i=0;i<n;i++){
	cin>>a[i];
	if(a[i]==0) counter++;
	cout<<counter<<endl;}
return 0;
}

