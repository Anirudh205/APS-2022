//Knapsack Problem

#include<bits/stdc++.h>
using namespace std;

int knapsack(int W,int wt[],int val[],int n){
    int K[n + 1][W + 1];
    for (int i = 0; i <= n; i++){
        for (int w = 0; w <= W; w++) {
            if (i == 0 || w == 0) K[i][w] = 0;
            else if (wt[i - 1] <= w) K[i][w] = max(val[i - 1]+ K[i - 1][w - wt[i - 1]],K[i - 1][w]);
            else K[i][w] = K[i - 1][w];
        }
    }
    return K[n][W];
}
int main(){
    int n,W;
    cin>>n>>W;
    int wt[n];
    int val[n];
    for(int i=0;i<n;i++) cin>>val[i];
    for(int i=0;i<n;i++) cin>>wt[i];
    cout<<knapsack(W,wt,val,n);
    return 0;
}