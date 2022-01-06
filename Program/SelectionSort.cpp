//SELECTION SORT

#include<iostream>
using namespace std;

void selectionSort(int arr[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		int minIndex=i;
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]<arr[minIndex])
			{
				minIndex=j;

			}
		}
		/*int temp=arr[i];
		arr[i]=arr[minIndex];
		arr[minIndex]=temp;
		*/
		swap(arr[minIndex], arr[i]);
		cout<<arr[i]<<" ";
	}
	
}

int main()
{
	int arr[9]={12,23,34,21,56,89,39,75,90};
	cout<<"The sorted Array after selection sort is:"<<endl;
	selectionSort(arr,9);
	
}
