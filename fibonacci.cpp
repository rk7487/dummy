#include<iostream>
using namespace std;
int func(int *arr,int n)
{
	
}
int main()
{
	 
long t;
unsigned long n;
cin>>t;
while(t>0)
{
	cin>>n;
	int a=0,b=1,i,num,j=0;unsigned long arr[100000];
	arr[0]=0;
	arr[1]=1;
	for(i=2;i<n;i++)
	{
			num=a+b;
			a=b;
			b=num;
			if(b>=10)
			{arr[i]=num;
			 arr[i]=arr[i]%10;
			}
			else{
				arr[i]=num;
			}
	}
	while(n>1)
	{
		n=n/2;
		j++;
	}
	
	cout<<arr[2*j-1]<<endl;
	
	t--;
}
return 0;
}
