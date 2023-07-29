#include<stdio.h>
#include<stdlib.h> 

int i;

//stack implementation
int stack[100];
int top = -1;

void push(int data){
    top++;
    stack[top] = data;
}

int isEmpty(){
    if(top == -1){
        return 1;
    }else{
        return 0;
    }
}

int pop(){
    int val = stack[top];
    top--;

    return val;
}

//queue implementation
#define MAX 100
int Qdata[MAX];
int front = -1;
int rear = -1;

int isEmptyQ(){
    if(front == -1){
        return 1;
    }else{
        return 0;
    }
}

void enqueue(int data){
    if(front == -1){
        front = 0;
    }

    rear = (rear + 1) % MAX;
    Qdata[rear] = data;
}

int dequeue(){
    int val = Qdata[front];

    if(front == rear){
        front = rear = -1;
    }

    front = (front + 1) % MAX;

    return val;
}

//stack implements using linked list
struct stack{
    int data;
    struct stack* next;
};

struct stack *Ltop = NULL;

void LLpush(int data){
    struct stack *newNode = (struct stack*) malloc(sizeof(struct stack));
    if(newNode == NULL){
        printf("coudnt create node\n");
        exit(1);
    } 
    newNode->data = data;
    newNode->next = NULL;

    newNode->next = Ltop;
    Ltop = newNode;
}

int isEmptyL(){
    if(Ltop == NULL){
        return 1;
    }else{
        return 0;
    }
}

int LLpop(){
    int val = Ltop->data;
    
    struct stack *temp = Ltop;
    Ltop = Ltop->next;

    free(temp);

    return val;
}

//queue using linked list
struct queue{
    int data;
    struct queue* next;
};

struct queue *f = NULL;
struct queue *r = NULL;

void Qpush(int data){
    struct queue *newNode = (struct queue*)malloc(sizeof(struct queue));
    if(newNode == NULL){
        printf("Coudnt create node\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    if(f == NULL){
        f = r = newNode;
    }else{
        r->next = newNode;
        r = newNode;
    }
}

int Qpop(){
    int val = f->data;
    struct queue* temp = f;
    f = f->next;
    free(temp);

    return val;
}

//linkded list
struct node{
    int data;
    struct node* next;
};

void LLdisplay(struct node* head){
    printf("Elements of nodes: ");
    while(head != NULL){
        printf("%d ");
        head = head->next;
    }
    printf("\n");
}

struct node* createNode(int data){
    struct node* newNode = (struct node*) malloc(sizeof(struct node));
    if(newNode == NULL){
        printf("Coudnt create node\n");
        exit(1);
    }

    newNode->data = data;
    newNode->next = NULL;

    return newNode;
}

struct node *insertAtFirst(struct node* head, int data){
    struct node *new = createNode(data);

    new->next = head;
    head = new;

    return head;
}

//display function for array
void display(int *arr, int n){
    printf("Elements of array: ");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

//only the swap function 
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

//sorting algorithms
void bubbleSort(int *arr, int n){
    for(i = 0; i < n; i++){
        for(int j = 0; j < n-1-i; j++){
            if(arr[j] > arr[j+ 1]){
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

void selectionSort(int *arr, int n){
    int j, minIndex;
    for(i = 0; i < n; i++){
        minIndex = i;
        for(j = i + 1; j < n; j++){
            if(arr[minIndex] > arr[j]){
                minIndex = j;
            }
        }
        
        if(minIndex != i){
            swap(&arr[minIndex], &arr[i]);
        }
    }
}

void insertionSort(int *arr, int n){
    int j, key;
    for(i = 0; i < n; i++){
        j = i -1;
        key = arr[i];

        while(j >= 0 && key < arr[j]){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void countSort(int *arr, int n){
    int max = arr[0];
    for(i = 0; i < n; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }

    int *count = (int *)malloc((max + 1) * sizeof(int));

    for(i = 0; i <= max; i++){
        count[i] = 0;
    }

    for(i = 0; i < n; i++){
        count[arr[i]] += 1;
    }

    int j = 0;
    for(i = 0; i <= max; i++){
        while(count[i] != 0){
            arr[j] = i;
            j++;
            count[i] -= 1;
        }
    }   
}

void merge(int *arr, int low,int mid, int high){
    int j, k, *b;
    i = k = low;
    j = mid +1;

    b = (int *)malloc((high+ 1) * sizeof(int));

    while(i <= mid && j <= high){
        if(arr[i] < arr[j]){
            b[k] = arr[i];
            i++; k++;
        }else{
            b[k] = arr[j];
            j++; k++;
        }
    }

    while(i <= mid){
        b[k] = arr[i];
        k++; i++;
    }

    while(j <= high){
        b[k] = arr[j];
        k++; j++;
    }

    for(i = low; i <= high; i++){
        arr[i] = b[i];
    }
}

void mergeSort(int *arr, int low, int high){
    int mid;

    if(low < high){
        mid = (low + high) / 2;

        mergeSort(arr, low, mid);
        mergeSort(arr, mid +1, high);
        merge(arr, low, mid, high);
    }
}


//Searching algorithms
void linearSearch(int *arr, int n, int key){
    for(i = 0; i < n; i++){
        if(arr[i] == key){
            printf("item found at index %d\n", i);
            return;
        }
    }
    
    printf("item not found\n");
}

void binarySearch(int *arr, int n, int key){
    int left, right, mid;
    left = 0; 
    right = n -1;

    while(left < right){
        mid = (left + right ) / 2;
        if(arr[mid] == key){
            printf("Item found at index %d\n", mid);
            return;
        }else if(arr[mid] > key){
            right = mid -1;
        }else{
            left = left + 1;
        }
    }

    printf("Item not found\n");
}

//the main function
int main()
{
    // // here only searching and sorting
    // int arr[] = {2, 4, 2, 9, 34, 53, 36, 5, 98};
    // int size = sizeof(arr) / sizeof(arr[0]);

    // display(arr, size);
    // linearSearch(arr, size, 53);

    // // bubbleSort(arr, size);
    // // selectionSort(arr, size);
    // // insertionSort(arr, size);
    // // countSort(arr, size);
    // mergeSort(arr, 0, size -1);
    // binarySearch(arr, size, 26);

    // display(arr, size);

    // push(5);
    // push(10);
    // push(15);

    // printf("Pooped item %d\n", pop());
    // printf("Pooped item %d\n", pop());
    // printf("Pooped item %d\n", pop());

    // enqueue(5);
    // enqueue(15);
    // enqueue(45);

    // printf("Dequeued item %d\n", dequeue());
    // printf("Dequeued item %d\n", dequeue());
    // printf("Dequeued item %d\n", dequeue());
    // return 0;

    //..stack using linked list
    // LLpush(5);
    // LLpush(10);
    // LLpush(15);
    // LLpush(20);
    // LLpush(25);

    // printf("LLpoping item %d\n", LLpop());
    // printf("LLpoping item %d\n", LLpop());
    // printf("LLpoping item %d\n", LLpop());

    //..queue using linked list
    // Qpush(5);
    // Qpush(10);
    // Qpush(3);
    // Qpush(93);

    // printf("Dequeing item form llqueu %d\n", Qpop());
    // printf("Dequeing item form llqueu %d\n", Qpop());
    // printf("Dequeing item form llqueu %d\n", Qpop());
    // printf("Dequeing item form llqueu %d\n", Qpop());

    struct node* head = NULL;

    head = insertAtFirst(head, 5);
    LLdisplay(head);

    return 0;
}

//struct node gulare keno always pointer hisebe nite hoy? emne normally node nile error show kore ka?
