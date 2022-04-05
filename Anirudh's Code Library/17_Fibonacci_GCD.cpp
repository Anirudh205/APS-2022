//Fibonacci GCD

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll GcdOfArray(vector<ll>& arr, ll idx)
{
    if (idx == arr.size() - 1) return arr[idx];
    ll a = arr[idx];
    ll b = GcdOfArray(arr, idx + 1);
    return __gcd(a, b);
}

ll fib(ll n)
{
    if (n <= 1)
        return n;
    return fib(n-1) + fib(n-2);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(ll i=0;i<n;i++) cin>>a[i];
    ll gcd=GcdOfArray(a,0);
    cout<<fib(gcd)%1000000007<<endl;
    return 0;
}