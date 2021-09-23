#include<algorithm>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int binary(int  arr[],int l,int h, int key)
{
    int mid;
    int y=0;
    while(l<=h)
    {
        mid=(l+h)/2;

        y++;
        if(arr[mid]==key)
        {
            cout<<"present"<<" ";
            return y;
        }
        else
        {

            if(arr[mid]>key)
            {
                h=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }

    }
    cout<<"Not Present"<<" ";
    return y;

}
int main()
{
int n;
cin>>n;
int arr[n];
int i;
for(i=0;i<n;i++)
{

    cin>>arr[i];
}
int key,x=0;
cout<<"enter the key";
cin>>key;
x++;
if(arr[0]==key)
{

    cout<<"present"<<" "<<x;
    return 0;
}
i=1;
while(i<n && arr[i]<=key)
{
    i=i*2;
    x++;
}
int y1=binary(arr,i/2,min(i,n-1),key);
cout<<x+y1;
}
