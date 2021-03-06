//Heap Sort

#include<bits/stdc++.h>
using namespace  std;

void swap(int a[],int b,int c){
    int temp=a[b];
    a[b]=a[c];
    a[c]=temp;
}
void heapify(int a[],int n, int i){
    int largest=i;
    int l=2*i+1;
    int r=2*i+2;
    if(l<n && a[l]>a[largest]) largest=l;
    if(r<n && a[r]>a[largest]) largest=r;
    if(largest!=i){
        swap(a,i,largest);
        heapify(a,n,largest);
    }
}
void heapsort(int a[],int n){
    for(int i=n/2-1;i>=0;i--) heapify(a,n,i);
    for(int i=n-1;i>0;i--){
        swap(a,0,i);
        heapify(a,i,0);
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    heapsort(a,n);
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    return 0;
}
