// Sub Set Problem
//check whether therse exists a subset in an given array from which we can obtain the desired sum 

#include<bits/stdc++.h>
using namespace std;

int sssp(int n,int sum,vector<int> v){
    int ss[n+1][sum+1];
    for(int i=0;i<=n+1;i++) ss[i][0]=1;
    for(int j=0;j<=sum+1;j++) ss[0][j]=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=sum;j++){
            if(ss[i-1][j]==1) ss[i][j]=1;
            else{
                if(v[i-1]>j) ss[i][j]=0;
                else ss[i][j]==ss[i-1][j-v[i-1]];
            }
        }
    }
    return ss[n][sum];
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int sum;
    cin>>sum;
    int k=sssp(n,sum,v);
    if(k) cout<<"A sub set found with a given sum"<<endl;
    else cout<<"No sub set with a given sum"<<endl;
    return 0;
}