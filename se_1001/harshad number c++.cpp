#include<iostream>
using namespace std;
int main()
{
	int a,n,sum=0;
	cout<<"enter the number:\n";
	cin>>n;
	a=n;
	while(a!=0)
	{
		sum%a==0;
		a/=10;
	}
	if(sum%n==0)
	cout<<"harshad";
	else
	cout<<"not";
	return 0;
}