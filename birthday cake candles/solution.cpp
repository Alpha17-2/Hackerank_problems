#include <iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    int count =0;
    cin>>n;
    int a[n];
    int max=INT_MIN;
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]>max){
            max=a[i];
            count = 1;
        }

        else if(a[i]==max){
            count ++;
        }
    }

    cout<<count<<endl;
    
    return 0;
}