#include<bits/stdc++.h>
using namespace std;
#define iamalpha ios_base::sync_with_stdio(false);cin.tie(NULL);
#define loop(a, n) for (int i = a; i < n;i++)
#define isEven(n) n%2==0
#define lli long long int
void solve();
bool isPerfectSquare(int n){
    int p = (int)sqrt(n);
    if(p*p == n) return true;
    return false;
}
int main()
{
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); 
    freopen("output.txt","w",stdout);
    #endif*/
    iamalpha
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
}
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> ans(n+1,0);
    bool isPossible = true;
    if(n%2!=0 && k==1)
        isPossible=false;
    else{
        for(int i=1;i<=n;i++){
            int leftSide = i-k;
            int rightSide = i+k;
            if(leftSide>=1 && ans[leftSide]==0){
                ans[leftSide]=i;
            }
            else if(rightSide<=n && ans[rightSide]==0){
                ans[rightSide]=i;
            }
            else{
                isPossible = false;
                break;
            }
        }
    }
    if(isPossible)
    {
        loop(1,n+1) cout<<ans[i]<<" ";
        cout<<"\n";
    }
    else
        cout<<"-1\n";
}
