#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin>>n>>m;
    int i, j;
    int a[n], b[m];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
   
    }
    for(j=0;j<m;j++)
    {
        cin>>b[j];
    }
    i=0;
    j=0;
    while(i!=n && j!=m)
    {
        if(a[i]==b[j])
        {
            cout<<a[i++]<<" ";
            j++;
        }
        else if(a[i]<b[j]){
         i++;
        }
        else{
            j++;
        }
    }
    return 0;

    

}