//Gift Problem

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int dp[n+1][m+1];
    for(int i=0;i<=n;i++) cin>>dp[i][0];
    for(int j=0;j<=m;j++) cin>>dp[0][j];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            dp[i][j]=max(dp[i-1][j],dp[i][j-1])+a[i][j];
        }
    }
    cout<<dp[n+1][m+1]<<endl;
    return 0;
}