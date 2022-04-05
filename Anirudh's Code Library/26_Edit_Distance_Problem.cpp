// Edit Distance Problem
//minimum number of edit distance required to reach from destination from source

#include<bits/stdc++.h>
using namespace std;

int edp(int l1,int l2,string s1,string s2){
    int ed[l1+1][l2+1];
    for(int i=0;i<=l1;i++) ed[i][0]=i;
    for(int j=0;j<=l2;j++) ed[0][j]=j;
    for(int i=1;i<=l1;i++){
        for(int j=1;j<=l2;j++){
            if(s1[i-1]==s2[j-1]) ed[i-1][j-1] = ed[i-1][j-1];
            else ed[i][j] = min(ed[i-1][j-1],min(ed[i-1][j],ed[i][j-1]))+1;
        }
    }
    return ed[l1][l2];
}

int main(){
    string s1,s2;
    cin>>s1>>s2;
    int l1,l2;
    l1=s1.length();
    l2=s2.length();
    cout<<"The minimum distance required is: "<<edp(l1,l2,s1,s2)<<endl;
    return 0;
}