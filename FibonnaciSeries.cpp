#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the value of n:"<<endl;
	cin>>n;
	int a=0;
	int b=1;
	cout<<a<<" "<<b<<" ";
	int nextNum=0;
	for(int i=0;i<=n;i++)
	{
		nextNum=a+b;
		cout<<nextNum<<" ";
		a=b;
		b=nextNum;
		
	}
	
}
