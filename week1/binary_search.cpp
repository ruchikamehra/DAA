#include<iostream>
using namespace std;
int binary_search(int arr[], int key,int n)
{
	int mid;
	int c=0;
	int x=0;
	int e=(n-1);
	while(c<=e)
	{
		mid=(c+e)/2;
	  x++;
		if(arr[mid]==key)
		{
		
		 cout<<"Present"<<" ";
			return(x);
			
		}
		else
		{ 
		if(arr[mid]>key)
		{
			
			 e=mid-1;
			
		}
		else
		{
			
		  	c=mid+1;
		}
	}
		
	}
	cout<<"Not Present"<<" ";
	return (x);
}
int main()
{
	int t;
	cin>>t; // testcases
	int n;
	int i,j;
	for(j=1;j<=t;j++)
	{
	cin>>n;
	int arr[n];
	

	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int key;
	cin>>key;
	cout<<binary_search(arr,key,n);

}
}
