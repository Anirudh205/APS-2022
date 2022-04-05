//Gaming Array
//Take largest element and delete numbers to thr right of it including that number

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int counter=0,m=0;
    for(int i=0;i<n;i++){
        if(a[i]>m){
            m=a[i];
            counter++;
        }
    }
    if(counter%2==0) cout<<"Player 2 wins"<<endl;
    else cout<<"Player 1 wins"<<endl;
    return 0;
}