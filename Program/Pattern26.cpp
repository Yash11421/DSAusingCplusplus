#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the value of n:"<<endl;
	cin>>n;
	int i=1;
	while(i<=n)
	{
		//Space Print karo
		int space=n-i;
		while(space)
		{
			cout<<" ";
			space=space-1;
		}
		//1st Triangle
		int j=1;
		while(j<=i)
		{
			cout<<j;
			j=j+1;
		}
		//2nd Triangle
		int start=i-1;
		while(start)
		{
			cout<<start;
			start=start-1;
			
		}
		cout<<endl;
		i=i+1;
		
	}
}
