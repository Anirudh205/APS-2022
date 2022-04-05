//Binomial Coefficient
//Given N and K find its binomial coefficient
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    k=min(k,n-k);
    int c[n];
    c[0]=1;
    for(int i=1;i<=n;i++){
        for(int j=min(i,k);j>0;j--){
            c[j]=c[j]+c[j-1];
        }
    }
    cout<<c[k+1]<<endl;
    return 0;
}