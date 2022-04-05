//Minimising coins
//minimum number of coins to get the desiered sum from the given set of coins

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,sum;
    cin>>n>>sum;
    vector<int> c(n),dp(sum+1,INT_MAX);
    for(int i=0;i<n;i++) cin>>c[i];
    dp[0]=0;
    for(int i=1;i<=sum;i++){
        for(int j=0;j<n && i-j>=0;j++){
            if(i-c[j]>=0) dp[i]=min(dp[i],dp[i-c[j]]+1);
        }
    }
    if(dp[sum]==INT_MAX) cout<<-1<<endl;
    else cout<<dp[sum]<<endl;
    return 0;
}