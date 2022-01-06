#include<iostream>
using namespace std;


int fact(int n)
{
	int fact=1;
	for(int i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	return fact;
}


int NCR(int n ,int r)
{
	int NUM=fact(n);
	int DEN=fact(r)*fact(n-r);
	return NUM/DEN;//Since Ncr is calculated as n!/r!(n-r)!
}


int main()
{
	int n,r;
	cout<<"Enter the values of n and r respectively:"<<endl;
	cin>>n>>r;
	cout<<"NCR for following n and r values are"<<" "<<NCR(n,r)<<endl;
	
}
