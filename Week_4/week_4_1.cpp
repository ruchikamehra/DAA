#include<iostream>
using namespace std;
int comparison , inversion ;
void  merge(int arr[], int l, int mid, int r)
{
	int n1=mid-l+1;
	int n2=r-mid;
	int a[n1];
	int b[n2];
	int i,j,k=0,x=0;
	for(i=0;i<n1;i++)
	{
		a[i]=arr[l+i];
	}
	for(j=0;j<n2;j++)
	{
		b[j]=arr[mid+1+j];
	}
	int m=l;
	while(k<n1 && x<n2)
	{
		comparison++;
	 if(a[k]<b[x])
		{
			arr[m]=a[k];
			m++;
			k++;
		
		}
		else
		{
			arr[m]=b[x];
			m++;
			x++;
			 inversion =inversion + mid - k + 1;
	
		}
	}
	while(k<n1)
	{
			arr[m]=a[k];
			m++;
			k++;
			
	}
while (x<n2)
	{
			arr[m]=b[x];
			m++;
			x++;
		
	}
}

void mergearray(int arr[], int l, int r)
{
	if(l<r)
	{
	int mid=(l+r)/2;
	mergearray(arr, l,mid);
	mergearray(arr, mid+1,r);
	merge(arr, l,mid,r);
}
}

int main()
{
	int t,y;
	cin>>t;
	for(y=1;y<=t;y++)
	{
	int n;
	cin>>n;
	int arr[n];
	int i,j;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int l=0;
	int r=n-1;
	 comparison=0;
	 inversion=0;
	mergearray(arr,l,r);
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl<<"comparison are :"<<" "<<comparison;
	cout<<endl<<"inversion  are :"<<" "<<inversion;
	
}
}
