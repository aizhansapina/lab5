#include <iostream>
#include <cmath> 
using namespace std;
int main()
{
	int n;
	int counter=0;
	cin>>n;
	for (int i=0;i<=n;i++){
	if (n%i==0) counter++;
	cout<<counter<<endl;}
return 0;
}

	
