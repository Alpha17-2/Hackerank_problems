/*Link to the problem Statement: https://www.hackerrank.com/challenges/a-very-big-sum/problem*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,A[10];
    long int sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
        sum+=A[i];
    }
    cout<<sum;
}

