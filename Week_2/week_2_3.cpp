#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int l;
	int n;
	for(l=1;l<=t;l++)
	{
	cin>>n;
	int arr[n];
	int i,j;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int key,c=0;
	cin>>key;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(abs(arr[i]-arr[j])==key)
			{
				c++;
			}
		}
	}
	cout<<c;
}
}
