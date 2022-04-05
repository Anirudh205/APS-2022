//Floyds Algorithm
//Pairwise Shortest Path

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 4;
    int i, j, k;
    int D[5][5] = {
                    {0, 0, 0, 0, 0},
                    {0, 0, 999, 3, 999},
                    {0, 2, 0, 999, 999},
                    {0, 999, 7, 0, 1},
                    {0, 6, 999, 999, 0}
                };
     cout<<"The supplied input is\n"<<endl;
     for(i = 1; i <= n; i++){
        for(j = 1; j<= n; j++) cout<<D[i][j];
        cout<<endl;
    }
    for(k = 1; k <= n; k++) {
        for(i = 1; i <= n; i++) {
            for(j = 1; j <= n; j++) {
                if((D[i][k] + D[k][j]) < D[i][j])
                    D[i][j] = D[i][k] + D[k][j];
            }
        }
    }
    cout<<"All pair shortest paths:\n"<<endl;
    for(i = 1; i <= n; i++){
        for(j = 1; j<= n; j++) cout<<D[i][j];
        cout<<endl;
    }
    return 0;
}