#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,k,p;
    cin>>n;
    int a[n];
    int b[101]={0};
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        b[a[i]]++;
    }
    k=0;
    for(i=0;i<100;i++)
    {
        p=0;
      p+=b[i];
      p+=b[i+1];
      k=max(k,p);
    }
    cout<<k<<endl;
}