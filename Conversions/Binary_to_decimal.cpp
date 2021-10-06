#include<bits/stdc++.h>
using namespace std;


void binaryToDecimal(int n)
{  
     
     int ans=0,i=0;
    while(n>0)
    {
       ans+=(n%10)*pow(2,i);
       n/=10;
       i++;
    }
    cout<<ans;
}

void octalToDecimal(int n)
{
    // 137= 7*1+3*8+1*16
    int ans=0,i=0;
    while(n>0)
    {
        ans+=n%10*pow(8,i);
        n/=10;
        i++;
    }
    cout<<ans;
}

void hexadecimalToDecimal(string s)
{
    
 
    int ans=0,j=0;
    int rem;
    for(int i=s.length()-1;i>=0;i--)
    {
        if(s[i]>='A' && s[i]<='F')
        {
            rem=s[i]-'A'+10;
            
        }
        else if(s[i]>='0' && s[i]<='9')
        {
            rem=s[i]-'0';
            
        } 
        ans+=rem*pow(16,j);

       j++;
    }
    cout<<ans;
}

int main()
{
    
    binaryToDecimal(1000);
    cout<<"\n";
    octalToDecimal(18);
    cout<<"\n";
    hexadecimalToDecimal("1F6");
}