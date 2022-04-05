//longest increasing subsequence
#include<bits/stdc++.h>
using namespace std;

void lis(vector<int> a,int n){
    vector<int> result(n,1);
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(a[i]>a[j] && result[i]<result[j] + 1) result[i]++;
        }
    }
    cout<<"The Length of LIS is "<<*max_element(result.begin(), result.end());
}

int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    lis(a,n);
    return 0;
}