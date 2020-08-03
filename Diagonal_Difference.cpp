/*                                        Alpha_The_Coder
                                                                        */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,sum=0,sum1=0,diff;
    cin>>n;
    int arr[n][n];
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            sum=sum+(arr[i][j]);
            else
            sum=sum+0;
        }
    } 
    for(i=0,j=n-1;i<n;i++,j--)
    {
            sum1=sum1+(arr[i][j]);
    } 
    diff=abs(sum-sum1);
    cout<<diff;
    return 0;
}
