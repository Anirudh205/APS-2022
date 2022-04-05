//Dijkstras Algorithm

#include<bits/stdc++.h>
using namespace std;
#define n 5

int mindistance(int distance[],bool visited[]){
    int min=INT_MAX,min_index;
    for(int i=0;i<n;i++){
        if(visited[i]==false && distance[i]<min)
            min=distance[i],min_index=i;
    }
    return min_index;
}

void display(int distance[]){
    cout<<"Vertex \t\t Distance from the sourse\n";
    for(int i=0;i<n;i++)
        cout<<i<<" \t\t"<<distance[i]<<endl;
}

void dijkstras(int graph[n][n],int src){
    int distance[n];
    bool visited[n];
    for(int i=0;i<n;i++)
        distance[i]=INT_MAX,visited[i]=false;
    distance[src]=0;
    for(int i=0;i<n-1;i++){
        int u=mindistance(distance,visited);
        visited[u]=true;
        for(int v=0;v<n;v++){
            if(!visited[v] && graph[u][v] && distance[u]+graph[u][v]<distance[v])
                distance[v]=distance[u]+graph[u][v];
        }
    }
    display(distance);
}

int main(){
    int graph[n][n]={{0,3,0,7,0},
                     {3,0,4,2,0},
                     {0,4,0,5,6},
                     {7,2,5,0,4},
                     {0,0,6,4,0}};
    int v=0;
    dijkstras(graph,v);
    return 0;
}