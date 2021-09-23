#include<iostream>
using namespace std;
int binary(int arr[], int n, int key)
{
    int f=0;
    int l=n-1;
    int mid;
    int i;
    while(f<l)
    {
        mid=(f+l)/2;

        if(arr[mid]==key)
        {
  
            return mid;
        }
        else
        {
        	if(arr[mid]>key)
        	{
        		l=mid-1;
			}
			else
			{
				f=mid+1;
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
int count =0;
int key;
cout<<"enter the key";
cin>>key;

int x=binary(arr,n,key);
if(x==-1)
{
	cout<<"not present";
}
else
{
	for(i=x;i<n;i++)
            {
                if(key==arr[i])
                {
                	count++;
				}
            }
}
cout<<count;

}
}
//10
//235 235 278 278 763 764 790 853 981 981
