#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i;
    int arr[26]={0};
    for(i=0;i<n;i++)
    {
        char x;
        cin>>x;
        arr[x-'a']++;
    }
    int index=-1;
    int max=INT_MIN;
    for(i=0;i<26;i++)
    {
        if(arr[i]>max)
        {
            index=i;
            max=arr[i];
        }

    }
    if(index>=0)
    {
        cout<<char(index+'a')<<arr[index];
    }
    else{
        cout<<"No duplicates present";
    }
return 0;
}