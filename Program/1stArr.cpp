#include<iostream>
using namespace std;

int ArraySum(int arr[],int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum=sum+arr[i];
		
	}
	return sum;
}


int main()
{
	int size;
	int Total;
	cout<<"Enter the size of array:"<<endl;
	cin>>size;
	int arr[10];
	for(int i=0;i<size;i++)
	{
		cout<<"arr"<<"["<<i<<"]"<<":";
		cin>>arr[i];
	}
	cout<<"Array is accepted"<<endl;
	Total=ArraySum(arr,size);
	cout<<"The sum is:"<<Total<<endl;
}
