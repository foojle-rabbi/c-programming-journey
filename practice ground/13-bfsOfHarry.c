#include<stdio.h>
#include<stdlib.h>
#define MAX 10 

int adj[10][10];
int nodes, edges, i;
int visited[10];

struct queue{
    int *data;
    int front;
    int rear;
};

int isEmpty(struct queue *q){
    if(q->front == -1){
        return 1;
    }else{
        return 0;
    }
}

void push(struct queue *q, int data){
    printf("pushed %d\n", data);
    if(q->front == -1){
        q->front = 0;
    }

    q->rear = (q->rear + 1) % MAX;
    q->data[q->rear] = data;
}

int pop(struct queue *q){
    int val = q->data[q->front];

    if(q->front == q->rear){
        q->front = q->rear = -1;
    }else{
        q->front = (q->front + 1) % MAX;
    }

    printf("popped %d\n", val);
    return val;
}

void bfs(int startingNode){
    struct queue q;
    q.front = -1;
    q.rear = -1;

    push(&q, startingNode);
    visited[startingNode] = 1;
    printf("printing value: %d\n", startingNode);

    while(!isEmpty(&q)){
        int x = pop(&q);

        for(i = 0; i < nodes; i++){
            if(adj[x][i] == 1 && visited[i] == 0){
                // printf("printing value: %d\n", i);
                visited[i] = 1;
                push(&q, i);
            } //not completed
        }
    }
}

int main()
{
    freopen("13-bfsOfHarry.txt", "r", stdin);
    scanf("%d %d", &edges, &nodes);

    for(i = 0; i < edges; i++){
        int n1, n2;
        scanf("%d %d", &n1, &n2);
        adj[n1][n2] = 1;
        adj[n2][n1] = 1;
    }

    bfs(0);

    // for(i = 0; i < nodes; i++){
    //     for(int j = 0; j < nodes; j++){
    //         printf("%d ", adj[i][j]);
    //     }
    //     printf("\n");
    // }
    return 0;
}