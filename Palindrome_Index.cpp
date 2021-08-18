#include<bits/stdc++.h>
using namespace std;
#define iamalpha ios_base::sync_with_stdio(false);cin.tie(NULL);
#define loop(a, n) for (int i = a; i < n;i++)
#define isEven(n) n%2==0
#define lli long long int
void solve();
bool isPallindrome(string s);
int firstApproach(string s,int n);
int secondApproach(string s,int n);
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); 
    freopen("output.txt","w",stdout);
    #endif
    iamalpha
    int t=1;
    cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}
int firstApproach(string s,int n){
  int left=0,right=n-1,ans=-1;
  bool isPossible = true;
  while(left<right && isPossible){
     if(s[left]==s[right])
        {
           left++;
           right--;
        }
     else if(s[left]==s[right-1])
        {
           if(ans==-1)
                {
                    ans=right;
                    right--;
                }
            else
                isPossible=false;
        }  
        else
            isPossible=false;
        }
        if(isPossible) return ans; 
        else return -1;
}
int secondApproach(string s,int n){
  int left=0,right=n-1,ans=-1;
  bool isPossible = true;
  while(left<right && isPossible){
     if(s[left]==s[right])
        {
           left++;
           right--;
        }
     else if(s[left+1]==s[right])
        {
           if(ans==-1)
                {
                    ans=left;
                    left++;
                }
            else
                isPossible=false;
        }  
        else
            isPossible=false;
        }
        if(isPossible) return ans; 
        else return -1;
}

void solve()
{
  string s;
  cin>>s;
  int n=s.size();
  int ans1 = firstApproach(s,n);
  int ans2 = secondApproach(s,n);
  if(ans1==-1 && ans2==-1)
  cout<<ans1<<"\n";
  else {
    if(ans1!=-1) cout<<ans1<<"\n";
    else cout<<ans2<<"\n";
  }           
}