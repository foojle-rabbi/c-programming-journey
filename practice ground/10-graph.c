#include<stdio.h> 
#define  WHITE 1
#define GREY 2
#define BLACK 3

int adj[10][10];
int nodes, edges;
int color[10];

void dfsVisit(int x){
    int i;
    color[x] = GREY;

    for(i = 0; i < nodes; i++){
        if(adj[x][i] == 1){
            if(color[i] == WHITE){
                dfsVisit(i);
            }
        }
    }

    color[x] = BLACK;
    printf("%d ", x);
}

void dfs(){
    int i;
    for(i = 0; i < nodes; i++){
        color[i] = WHITE;
    }
    
    for(i = 0; i < nodes; i++){
        if(color[i] == WHITE){
            dfsVisit(i);
        }
    }
}

int main()
{
    freopen("inputValue.txt", "r", stdin);
    int i, n1, n2;

    scanf("%d %d", &nodes, &edges);
    for(i = 0; i < edges; i++){
        scanf("%d %d", &n1, &n2);
        adj[n1][n2] = 1;
        adj[n2][n1] = 1;
    }

    dfs();

    return 0;
}