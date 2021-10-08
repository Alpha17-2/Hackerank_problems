#include<iostream>
using namespace std;
int main()
{int A[3],B[3],i,a=0,b=0;
for(i=0;i<3;i++)
cin>>A[i];
for(i=0;i<3;i++)
cin>>B[i];
for(i=0;i<3;i++)
{
    if(A[i]>B[i])
    a++;
    else if(B[i]>A[i])
    b++;
}
cout<<a<<" "<<b;
}
