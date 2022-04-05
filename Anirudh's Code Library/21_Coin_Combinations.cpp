//Coin Combinations
//total number of combinations to get the required sum fro the given set of coins

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,sum;
    cin>>n>>sum;
    vector<int> c(n),dp(sum+1,0);
    for(int i=0;i<n;i++) cin>>c[i];
    dp[0]=1;
    for(int i=1;i<=sum;i++){
        for(int j=0;j<n && i-j>=0;j++){
            if(i-c[j]>=0) dp[i]=dp[i]+dp[i-c[j]];
        }
    }
    if(dp[sum]) cout<<dp[sum]<<endl;
    else cout<<-1<<endl;
    return 0;
}