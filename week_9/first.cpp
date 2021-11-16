#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void solution(vector<vector<int>>&arr){
int i,j,k;
for(k=0;k<arr.size();k++)
{
    for(i=0;i<arr.size();i++)
    {
        for(j=0;j<arr.size();j++)
        {
         
	            if(arr[i][k]==-1 || arr[k][j]==-1) continue;
	            if(arr[i][j]==-1) arr[i][j] = ar r[i][k] + arr[k][j];
	                else arr[i][j] = min(arr[i][j], arr[i][k]+arr[k][j]);
        }
    }
}
}

int main()
{
    int t;
    cin>>t;
    int x;
    for(x=1;x<=t;x++)
    {
    int n;
    cin>>n;
    vector<vector<int>>arr(n, vector<int>(n,-1));
    int i, j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
  
    solution(arr);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }




}
}
