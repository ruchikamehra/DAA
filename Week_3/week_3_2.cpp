#include<iostream>
using namespace std;
int main ()
{
	int t;
	cin>>t;
	int n;
	int l;
	for(l=1;l<=t;l++)
	{
	cin>>n;
	int arr[n];
	int i,j;
	int temp;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int min,c=0,swap=0;
	for(i=0;i<n;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			c++;
			if(arr[min]>arr[j])
			{
				min=j;
			
				
			}
		}
		       temp=arr[i];
				arr[i]=arr[min];
				arr[min]=temp;
					swap++;
			
	}
	for(i=0;i<n;i++)
	{
	cout<<arr[i]<<" ";
}
cout<<endl<<"comparisons :"<<" "<<c;
cout<<endl<<"swaps :"<<" "<<swap;
}
}
