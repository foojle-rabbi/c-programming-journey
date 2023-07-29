#include<stdio.h> 

#define WHITE 1
#define GREY 2
#define BLACK 3
#define MAX 10

int adj[10][10];
int nodes, edges, i;
int color[10];

typedef struct{
    int data[MAX];
    int front;
    int rear;
} queue;

int isEmpty(queue *q){
    if(q->front == -1){
        return 1;
    }else{
        return 0;
    }
}

void push(queue *q, int data){
    if(q->front == -1){
        q->front = 0;
    }

    q->rear = (q->rear + 1) % MAX;
    q->data[q->rear] = data;
}

int pop(queue *q){
    int val = q->data[q->front];

    if(q->front == q->rear){
        q->front = q->rear = -1;
    }

    q->front = (q->front + 1) % MAX;

    return val;
}

void bfs(int startingNode){
    for(i = 0; i < nodes; i++){
        color[i] = WHITE;
    }

    queue q;
    q.front = -1;
    q.rear = -1;

    push(&q, startingNode);

    while (!isEmpty(&q))
    {
        int x = pop(&q);
        if(color[x] == WHITE){
            color[x] = GREY;
            printf("%d ", x);

            for(i = 0; i < nodes; i++){
                if(adj[x][i] == 1 && color[i] == WHITE){
                    push(&q, i);
                }
            }
            color[x] = BLACK;
        }
    }
    
}

int main()
{
    freopen("12-bfsDipto.txt", "r", stdin);
    int n1, n2;
    scanf("%d %d", &edges, &nodes);

    for(i = 0; i < edges; i++){
        scanf("%d %d", &n1, &n2);
        adj[n1][n2] = 1;
        adj[n2][n1] = 1;
    }

    for(i = 0; i < nodes; i++){
        for(int j = 0; j < nodes; j++){
            printf("%d ", adj[i][j]);
        }
        printf("\n");
    }

    bfs(0);

    return 0;
}