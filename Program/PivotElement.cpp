#include<iostream>
using namespace std;

int Calpivot(int arr[],int n,int tar)
{
	int s=0;
	int e=n-1;
	int mid=s+(e-s)/2;
	while(s<e)
	{
		if(arr[mid]>=arr[0])
		{
			s=mid+1;
		}
		
		else
		{
			e=mid;
		}
		mid=s+(e-s)/2;
	}
	return s;
	
	
}


int main()
{
	int tar;
	cout<<"Enter the value you wanna find:"<<endl;
	cin>>tar;
	int arr[7]={2,1,4,5,6,8,3};
	int Calpivot1=Calpivot(arr,7,tar);
	cout<<"The pivot Element is "<<Calpivot1<<endl;

}
