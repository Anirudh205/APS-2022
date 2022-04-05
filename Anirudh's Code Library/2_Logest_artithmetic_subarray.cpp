//longest arithmetic sub array

#include<bits/stdc++.h>
using namespace std;

void arithmeticsum(int arr[],int n){
    int ans=2;
    int pd=arr[1]-arr[0];
    int j=2;
    int current=2;
    while(j<n){
        if(pd==arr[j]-arr[j-1]) current++;
        else
        {
            pd=arr[j]-arr[j-1];
            current=2;
        }
        ans=max(ans,current);
        j++;
    }
    cout<<ans<<endl;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    arithmeticsum(arr,n);
    return 0;
}
