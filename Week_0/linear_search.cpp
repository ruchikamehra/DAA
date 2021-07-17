
#include<iostream>
using namespace std;
int linear_search(int arr[], int n , int key)
{
    int i,c=0,x=-1;
 for(i=0;i<n;i++)
    {
    	c++;
        if(key==arr[i])
        {
        	
           x=i;
           break;
           
        
        }
       
    }
    cout<<"The number of comparison "<<c<<endl;
    return(x);

}
int main()
{
    int t;
    cout<<"enter the number of testcases";
    cin>>t;
    int n,i,j;
      for(j=1;j<=t;j++)
     {
	 
   cout<<"enter the size of the array";
    cin>>n;
    int arr[n];
    int key;
    cout<<"enter the element to search";
    cin>>key;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int result=linear_search(arr,n,key);
    if(result<=0)
    {
        cout<<"does not exist"<<endl;
    }
    else{
        cout<<"the index is"<<result;
    }
}
     
   return 0;

}
