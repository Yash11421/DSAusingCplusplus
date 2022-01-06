#include<iostream> 
using namespace std;

int getPivot(int arr[], int n) {

    int s = 0;
    int e = n-1;
  
    int mid = s + (e-s)/2;

    while(s<e) {

        if(arr[mid] >= arr[0])
        {
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}

int BinarySearch(int arr,int s,int e,int key)
{
	int s1=s;
	int e1=e;
	int mid=s1+(e1-s1)/2;
	while(s1<=e1)
	{
		if(arr[mid]==key)
		{
			return mid;
		}
		if(arr[mid]>key)
		{
			e1=mid-1;
		}
		else 
		{
			s1=mid+1;
		}
		mid=s1+(e1-s1)/2;
	}
	return mid;
}



int main() {
	int k=4;
    int arr[7]={7,9,10,1,4,5,8};
    int Pivot=getPivot(arr,7);
	cout << "Pivot is "<<Pivot<< endl;
	if(arr[Pivot]<=k && k<=arr[n-1])
	{
		cout<<"Element is at location "<<return BinarySearch(arr,Pivot,n-1,k)<<endl;
		
	}
	else
	{
		return BinarySearch(arr,0,Pivot-1,k);
	}
	
    
}

