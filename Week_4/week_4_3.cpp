#include<iostream>
using namespace std;
void merge( int arr[], int l ,  int mid, int r)
{
	int n1=mid-l+1;
	int n2=r-mid;
	int i,j;
	int a[n1],b[n2];
	for(i=0;i<n1;i++)
	{
		a[i]=arr[l+i];
	}
	for(j=0;j<n2;j++)
	{
		b[j]=arr[mid+j+1];
	}
	int p1=0,p2=0,p3=l;
	while(p1<n1 && p2<n2)
	{
		if(a[p1]<b[p2])
		{
			arr[p3]=a[p1];
			p1++;
			p3++;
		}
		else
		{
			arr[p3]=b[p2];
			p2++;
			p3++;
			
		}
	}
	while(p1<n1)
	{
			arr[p3]=a[p1];
			p1++;
			p3++;
	}
	while(p2<n2)
	{
		arr[p3]=b[p2];
			p2++;
			p3++;
			
	}
}
void mergesort(int arr[], int l ,int r)
{
	int mid;
	if(l<r)
	{
		mid=(l+r)/2;
		mergesort(arr, l, mid);
		mergesort(arr, mid+1, r);
		merge( arr, l, mid, r);
	}
}
int main()
{
	int t;
	cin>>t;
	int op;
	for(op=1;op<=t;op++)
	{
	int n;
	cin>>n;
	int arr[n];
	int i;

	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
		int key;
	cin>>key;
	int l=0;
	int r=n-1;
	mergesort(arr,l,r);
//	for(i=0;i<n;i++)
//	{
//		cout<<arr[i]<<"  ";
//	}
	cout<< endl<< arr[key-1];
}
} 

//10
//123 656 54 765 344 514 765 34 765 234
