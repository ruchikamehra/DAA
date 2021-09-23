#include<iostream>
using namespace std;
int sumofthree(int arr[], int n)
{
	int i,j,k;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			for(k=i+1;k<n;k++)
			{
			if(arr[i]+arr[j]==arr[k])
		{
			cout<<i+1<<" "<<j+1<<" "<<k+1;
			return 0;
		}
				
			}
		}
		
	}
	return -1;
}
int main()
{
	int t;
	cin>>t;
	int l;
	for(l=1;l<=t;l++)
	{
	
	int n;
	cin>>n;
	int arr[n];
	int i;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
 int x=	sumofthree(arr,n);
	if(x==-1)
	{
		cout<<"No Sequene found";
	}

}

}


//10
//24 28 48 71 86 92 120 194 201
