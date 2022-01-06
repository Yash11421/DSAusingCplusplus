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
		int j=1;
		int star=n-i+1;
		while(star)
		{
			cout<<'*';
			star=star-1;
			j=j+1;
		}
		
		cout<<endl;
		i=i+1;
	}
	
}
