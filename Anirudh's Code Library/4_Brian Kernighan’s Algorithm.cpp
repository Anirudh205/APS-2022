//Brian Kernighan’s Algorithm
//to count number of set bits
#include<bits/stdc++.h>
using namespace std;

int setbit(int n){
    int count=0;
    while(n){
        n=n&(n-1);
        count++;
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    int k=setbit(n);
    cout<<"No of set bits= "<<k<<endl;
    return 0;
}