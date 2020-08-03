/*                                                  Alpha_The_Coder
                                                  Created on 01/06/2020                                                     */

#include <bits/stdc++.h>
using namespace std;
#define iamalpha ios_base::sync_with_stdio(false);cin.tie(NULL);
void solve();
int main()
{
    iamalpha;
    int t;cin>>t;
    while(t--)
    {
        long long int black,white;
     cin>>black>>white;
     long long int blackprice,whiteprice,convertprice;
     cin>>blackprice>>whiteprice>>convertprice;
     long long int ans=0;
     if(blackprice==whiteprice)
     {
         ans=(blackprice*black)+(white*whiteprice);
         cout<<ans<<"\n";
     }
     else{
        long long int m1=(blackprice*black)+((blackprice+convertprice)*white);
        long long int m2=( (whiteprice+convertprice)*black)+(white*whiteprice);
        long long int m3=(black*blackprice)+(white*whiteprice);
        ans=min(min(m1,m2),m3);
        cout<<ans<<"\n";
     }
    }
    return 0;
}

















