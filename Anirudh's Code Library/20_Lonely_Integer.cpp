//Lonely Integer
//Given an array of integers, where all elements but one occur twice, find the unique element

#include<bits/stdc++.h>
using namespace std;

int lonelyinteger(vector<int> a) {
    int temp=0;
    for(int i=0;i<a.size();i++) temp=temp^a[i];
    return temp;
}

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<lonelyinteger(a)<<endl;
    return 0;
}