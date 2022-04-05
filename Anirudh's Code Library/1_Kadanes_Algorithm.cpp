//kadanes Algorithm
//maximum sum subarray

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    int cursum=0,maxsum=INT_MIN;
    for(int i=0;i<n;i++){
        cursum += arr[i];
        if(cursum<=0) cursum=0;
        maxsum=max(maxsum,cursum);
    }
    cout<<maxsum<<endl;
    return 0;
}
