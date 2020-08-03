/*                                                  Alpha_The_Coder
                                                  Created on 04/06/2020                                                     */

#include <bits/stdc++.h>
using namespace std;
void solve();
int main()
{
    int t=1;
    //cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
void solve()
{
   int n;
   cin>>n;
   pair<long long int,int>sum[n+1];
   long long int order,prep;
   for(int i=1;i<=n;i++)
   {
       cin>>order>>prep;
       long long int s=order+prep;
       sum[i]=make_pair(s,i);
   }
   sort(sum+1,sum+n+1);
   for(int i=1;i<=n;i++)
   {
       cout<<sum[i].second<<" ";
   }

}

