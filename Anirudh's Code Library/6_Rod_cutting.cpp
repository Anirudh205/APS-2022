//Rod cutting Problem

#include<bits/stdc++.h>
using namespace std;

int cutRod(vector<int> price, int n)
{
   int val[n+1];
   val[0] = 0;
   int i, j;
   for (i = 1; i<=n; i++)
   {
       int max_val = INT_MIN;
       for (j = 0; j < i; j++)
         max_val = max(max_val, price[j] + val[i-j-1]);
       val[i] = max_val;
   }
   return val[n];
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    cout <<"Maximum Obtainable Value is "<<cutRod(arr, n);
    return 0;
}