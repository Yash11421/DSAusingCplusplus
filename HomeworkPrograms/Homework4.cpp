#include<iostream>
using namespace std;
int main()
{
	int i=2,n;
	int sum=0;
	cout<<"Enter the value of n"<<endl;
	cin>>n;
	while(i<=n)
	{
		sum=sum+i;
		i=i+2;
		
	}
	cout<<"The sum of all even numbers from 2 to" <<" "<<n<<" "<<"is"<<" "<<sum<<endl;
}
	
	
