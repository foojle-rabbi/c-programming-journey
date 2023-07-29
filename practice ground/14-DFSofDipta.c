#include<stdio.h>
#define WHITE 1
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

    for(int j = 0; j < nodes; j++){
        if(color[j] == WHITE)
        dfsVisit(j);
        
    }
}

int main()
{
    //eta ke chatgpt ke dekhaite hobe karon eta te somossa ache cause shob gula node visite dile o visit hoy na
    //bro i solved the problem. the problem was occouring because of global variable i.
    freopen("input2.txt", "r", stdin);
    scanf("%d %d", &nodes, &edges);

    for(int i = 0; i < edges; i++){
        int n1, n2;
        scanf("%d %d", &n1, &n2);
        adj[n1][n2] = 1;
        adj[n2][n1] = 1;
    }

    dfs();
    return 0;
}

/*
0 1 0 0 0 0 0 
1 0 0 0 0 1 0 
0 0 0 1 0 1 0 
0 0 1 0 1 0 0 
0 0 0 1 0 0 0 
0 1 1 0 0 0 1 
0 0 0 0 0 1 0
*/