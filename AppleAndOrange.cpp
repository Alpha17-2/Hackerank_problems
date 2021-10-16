/*Link to the problem : https://www.hackerrank.com/challenges/apple-and-orange/problem */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int  s,t,d,a,b,m,n;int A[100000],B[100000]; int CA=0,CO=0;
    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;
    for(int i=0;i<m;i++)
    {
        cin>>A[i];
        A[i]+=a;
        if(A[i]>=s&&A[i]<=t)
        CA++;
    
    }
    for(int i=0;i<n;i++)
    {
        cin>>B[i];
        B[i]+=b;
        if(B[i]>=s&& B[i]<=t)
        CO++;
    }
    cout<<CA<<endl<<CO;
    
    
}//main
