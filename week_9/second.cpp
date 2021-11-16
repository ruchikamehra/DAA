#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct Item
{
    int value;
    int weight;
};
class solution {
    public :
    static bool comp(Item a , Item b)
    {
        double r1=(double)a.value / (double)a.weight;
        double r2=(double)b. value/ (double)b.weight;
        return(r1>r2);
    }
    double fractionalKnapsack(int n, Item arr[], int W)
    {
        sort (arr, arr+n, comp);
        int current=0;
        double finalvalue=0.0;
       int i;
        for(i=0;i<n;i++)
        {
            if(current+arr[i].weight<=W)
            {
                current=current+arr[i].weight;
                finalvalue=finalvalue+arr[i].value;
            }
            else
            {
                int left=W-current;
                finalvalue=finalvalue+((double)(arr[i].value)/(double)(arr[i].weight))*(double)left;
                break;
            }
        }
        return finalvalue;
    }
};
int main()
{

	cout<<setprecision(2)<<fixed;
int n ;
cin>>n;
int W;
cin>>W;
Item arr[n];
int j,k;
for(j=0;j<n;j++)
{
    cin>>arr[j].value;
    cin>>arr[j].weight;
}
solution s;
cout<<s.fractionalKnapsack(n, arr, W);
return 0;



}

