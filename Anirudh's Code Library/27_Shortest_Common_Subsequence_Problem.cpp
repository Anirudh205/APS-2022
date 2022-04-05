// Shortest Problem SubSequence Problem

#include<bits/stdc++.h>
using namespace std;

int scsp(int l1,int l2, string s1,string s2){
    int T[l1+1][l2+1];
    for(int i=0;i<=l1;i++) T[i][0]=i;
    for(int j=0;j<=l2;j++) T[0][j]=j;
    for(int i=1;i<=l1;i++){
        for(int j=1;j<=l2;j++){
            if(s1[i-1]==s2[j-1]) T[i][j]=T[i-1][j-1]+1;
            else T[i][j]=1+min(T[i-1][j-1],T[i][j-1]); 
        }
    }
    return T[l1][l2];
}

int main(){
    string s1,s2;
    int l1,l2;
    l1=s1.length();
    l2=s2.length();
    cout<<scsp(l1,l2,s1,s2)<<endl;
    return 0;
}