#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Value of n?:"<<endl;
	cin>>n;
	int i=1;
	char Value='A';
	while(i<=n)
	{
		int j=1;
		while(j<=n)
		{
			cout<<Value<<" ";
			j=j+1;
		}
		Value=Value+1;
		cout<<endl;
		i=i+1;
	}
	
	
}
