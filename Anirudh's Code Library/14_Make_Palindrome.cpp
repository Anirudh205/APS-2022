//minimum elements to make a string Palindrome

#include<bits/stdc++.h>
using namespace std;

int get_lcs(string s1,string s2,int len1,int len2){
    int i, j;
    int lcs[len1+1][len2+1];
    for(i = 0 ; i < len2; i++) lcs[0][i] = 0;
    for(i = 0; i <= len1; i++) lcs[i][0]=0;
    for(i = 1; i <= len1; i++) {
        for(j = 1; j <= len2; j++) {
            if(s1[i-1] == s2[j-1]) lcs[i][j] = 1 + lcs[i-1][j-1];
            else{
                if( lcs[i-1][j] > lcs[i][j-1]) lcs[i][j]=lcs[i-1][j];
                else lcs[i][j] = lcs[i][j-1];
            }
        }
    }
    return lcs[len1][len2];
}

int main(){
    string s1,s2;
    cin>>s1;
    s2=s1;
    reverse(s2.begin(), s2.end());
    int l=s1.length();
    int result = get_lcs(s1,s2,s1.length(),s2.length());
    int ans = l- result;
    cout<<"minimum number of elements required to make a string palindrome = "<<ans<<endl;
    return 0;
}