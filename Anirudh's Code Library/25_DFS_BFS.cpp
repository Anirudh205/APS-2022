//DFS BFS

#include<bits/stdc++.h>
using namespace std;

int n=5,f=0,r=-1;
int visited[20],q[20],reach[20];

 void dfs(int v,int a[10][10]){
     reach[v]=1;
     for(int i=0;i<n;i++){
         if(a[v][i] && !reach[i]){
             cout<<v<<"->"<<i<<endl;
             dfs(i,a);
         }
     }
 }
 
 void bfs(int v,int a[10][10]){
     visited[v]=1;
     q[++r]=v;
     while(f<=r){
         cout<<q[f++]<<" ";
         for(int i=0;i<n;i++){
             if(a[q[f-1]][i] && !visited[i]){
                 visited[i]=1;
                 q[++r]=i;
             }
         }
     }
 }

 int main(){
     int a[10][10]={{0,1,1,0,1},
                   {1,0,0,1,1},         
                   {1,0,0,0,1},
                   {0,1,0,0,1},         
                   {1,1,1,1,0}};
    int v=0;
    cout<<"\n DFS Traversal:\n";
    dfs(v , a);
    cout<<"\n BFS Traversal:\n";
    bfs(v , a);
    return 0;
 }