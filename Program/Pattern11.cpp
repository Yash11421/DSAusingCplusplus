#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Value of n is?:"<<endl;
	cin>>n;
	int row=1;
	while(row<=n)
	{
		int col=1;
		while(col<=row)
		{
			cout<<row-col+1<<" ";
			col=col+1;
			
			
		}
		cout<<endl;
		row=row+1;
	}
}
