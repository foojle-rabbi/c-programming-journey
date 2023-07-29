//in this code i will implement graphs all operation i think
//suppose dfs bfs of both harrys and diptos

#include<stdio.h> 

int adj[10][10];
int nodes, edges;

int visited[10];

void dfsVisit(int x){
    visited[x] = 1;
    printf("%d ", x);

    for(int i = 0; i < nodes; i++){
        if(adj[x][i] == 1 && visited[i] == 0){
            
            dfsVisit(i);
        }
    }
}

void dfs(){
    for(int i = 0; i < nodes; i++){
        if(visited[i] == 0)
        dfsVisit(i);
    }
}

int main()
{
    freopen("input2.txt", "r", stdin);
    int n1, n2, i;
    scanf("%d %d", &edges, &nodes);

    for(i = 0; i < edges; i++){
        scanf("%d %d", &n1, &n2);
        adj[n1][n2] = 1;
        adj[n2][n1] = 1;
    }

    dfs();
    return 0;
}