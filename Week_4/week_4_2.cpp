#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int sw;
int comparison ;   // global variable
void swap(int arr[], int i, int j)
{
	int temp;
	temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
}
int partition(int arr[], int l, int r)
{
	int pivot=arr[r];
	int i=l-1;
	int j;
	for(j=l;j<r;j++)
	{
		
			comparison++;
		if(arr[j]<pivot)
		{
			i++;
			swap(arr,i,j);
			sw++;
			
		}
	}
	swap(arr,i+1,r);
	sw++;
	return (i+1);
}
void quicksort(int arr[], int l , int r)
{
	if(l<r)
	{
	int pi=partition(arr, l , r);
	quicksort(arr, l, pi-1);
	quicksort(arr, pi+1,r);
}
}
int main()
{
	int t;
	int op;
	cin>>t;
	int n;
	for(op=1;op<=t;op++)
	{
	cin>>n;
	int arr[n];
	int i;
	sw=0;
	comparison=0;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int l=0;
	int r=n-1;
	quicksort(arr, l,r);
	for (i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl<<"swaps : "<<" "<<sw;
	cout<<endl<<"comparisons :"<<" "<<comparison;
}


}

//8
//23 65 21 76 46 89 45 32
