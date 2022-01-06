#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,op;
	int n1=0;
	cout<<"Enter the amount:"<<endl;
	cin>>n;
	//cout<<"Enter the operation you want to perform:"<<endl;
	//cout<<"1)100 ke note"<<endl<<"2)50 ke note"<<endl<<"3)20 ke note"<<endl<<"4)10 ke note"<<endl<<"5)1 ke note"<<"6)END "<<endl;
	cout<<"Enter any number: ";
	cin>>op;
	
	switch (op)
	{
		case 1:
			n1=n/100;
			cout<<n1<<" "<<"Itne 100 ke notes chaheye"<<endl;
			n1=n1*100;
			n=n-n1;
			
			 
		
		case 2:
			if(n>50)
			{
			n1=n/50;
			cout<<n1<<" "<<"Itne 50 ke notes chaheye"<<endl;
			n1=n1*50;
			n=n-n1;
		
			}
		
		case 3:
			if(n>20)
			{
			n1=n/20;
			cout<<n1<<" "<<"Itne 20 ke notes chaheye"<<endl;
			n1=n1*20;
			n=n-n1;
			
			}
		
			
		case 4:
			if(n>10)
			{
			n1=n/10;
			cout<<n1<<" "<<"Itne 10 ke notes chaheye"<<endl;
			n1=n1*10;
			n=n-n1;
		
				
			}
					
		case 5:
			if(n>1)
			{
			n1=n/1;
			cout<<n1<<" "<<"Itne 1 ke notes chaheye"<<endl;
			n1=n1*1;
			n=n-n1;
			
				
			}
			
		case 6:
			exit;
		
		
	}

}
