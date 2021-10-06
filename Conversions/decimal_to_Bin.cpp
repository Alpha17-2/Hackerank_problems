#include<bits/stdc++.h>
using namespace std;


void decimalToBinary(int n)
{ 
    int  ans=0,i=0;
    while(n>0)
    {   
        ans+=(n%2*pow(10,i));
        n/=2;
        i++;
    }
    cout<<ans;
}
void decimalToOctal(int n)
{
    int ans=0,i=0;
    while(n>0)
    {
        ans+=n%8*pow(10,i);
        n/=8;
        i++;
    }
    cout<<ans;
}
void decimalToHexadecimal(int n)
{
    string s="";
    int i=0;
    while(n>0)
    {
     int rem=n%16;
    
     if(rem>=10 && rem<=15)
     {
         s+=rem-10+'A';
     
     }
     else
     s+=rem+'0';
     n/=16;
    }
    reverse(s.begin(),s.end());
    cout<<s;
}



int main()
{
    int n;
    cin>>n;
    decimalToBinary(n);
    cout<<"\n";
    decimalToOctal(n);
    cout<<"\n";
    decimalToHexadecimal(n);

 
 
}