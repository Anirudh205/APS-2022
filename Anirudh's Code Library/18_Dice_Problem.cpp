//Dice Problem
//number of possible ways to get the desiered sum

#include<bits/stdc++.h>
using namespace std;
int main(){
    int sum;
    cin>>sum;
    vector<int> dp(sum+1,0);
    dp[0]=1;
    for(int i=1;i<=sum;i++){
        for(int j=1;j<=6 && i-j>=0;j++){
            dp[i]=dp[i]+dp[i-j];
        }
    }
    cout<<dp[sum]<<endl;
    return 0;
}