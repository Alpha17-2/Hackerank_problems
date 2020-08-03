/*                                                  Alpha_The_Coder
                                                  Created on 03/06/2020                                                     */

#include <bits/stdc++.h>
using namespace std;
void solve();
int main()
{
    solve();
    return 0;
}
void solve()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    int c=0;
    int i=0;
    while(i<n)
    {
        if(a[i+1]-a[i]<=4)
        {
            int start=i;
            int j;
            for(j=i+1;j<n;j++)
            {
                if(a[j]-a[start]<=4)
                    continue;
                else
                {
                    i=j;
                    break;
                }
            }
            c++;
            if(j==n)
                break;
        }
        else
        {
            c++;
            i++;
        }

    }
    cout<<c;
}

