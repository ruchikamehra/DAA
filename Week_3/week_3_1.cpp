#include<iostream>
using namespace std;
int main()
{
	int n;
	int t;
	cin>>t;
	int l;
	for(l=1;l<=t;l++)
	{
	cin>>n;
	int arr[n];
	int i,j;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int c=0;
	int s=0;
	int current;
	for(i=1;i<n;i++)
	{
		current =arr[i];
		j=i-1;
		while(arr[j]>current && j>=0)
		{
			arr[j+1]=arr[j];
			c++;
			s++;
			j--;
		}
		arr[j+1]=current;
	    s++;
	}
	
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl<<"comparisons : "<<" "<<c;
	cout<<endl<<"shift : "<<" "<<s;
}
}
