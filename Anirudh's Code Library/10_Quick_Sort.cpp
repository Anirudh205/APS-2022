//Quick Sort

#include<bits/stdc++.h>
using namespace std;

void swap(int a[],int b,int c){
    int temp=a[b];
    a[b]=a[c];
    a[c]=temp;
}
int partition(int a[],int s,int e){
    int pivot=a[s];
    int lb=s;
    int ub=e;
    while(lb<ub){
        while(a[lb]<=pivot) lb++;
        while(a[ub]>pivot) ub--;
        if(lb<ub) swap(a,lb,ub);
    }
    swap(a,s,ub);
    return ub;
}
void quicksort(int a[],int s,int e){
    if(s<e){
        int pi=partition(a,s,e);
        quicksort(a,s,pi-1);
        quicksort(a,pi+1,e);
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    quicksort(a,0,n-1);
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    return 0;
}
