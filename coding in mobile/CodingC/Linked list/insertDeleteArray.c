#include<stdio.h>
#define max 10

struct array {
    int *arr;
    int size;
};

void insertAtIndex(struct array *a, int data, int index);
void deleteIndex(struct array *a, int index);
void display(struct array *a) {
    for(int i=0; i< a->size; i++) {
        printf("%d ", a->arr[i]);
    }
    printf("\n");
}

int main()
{
    struct array a;
    a.arr = (int *) malloc(max*sizeof(int));

    a.arr[0] = 2;
    a.arr[1] = 3;
    a.arr[2] = 5;
    a.arr[3] = 7;
    a.arr[4] = 10;

    a.size = 5;
    display(&a);

    insertAtIndex(&a, -6, 2);
    display(&a);

    deleteIndex(&a, 2);
    display(&a);

    return 0;
}

void insertAtIndex(struct array *a, int data, int index) {
    int i;
    a->size++;
    for(i=a->size; i > index; i--) {
        a->arr[i] = a->arr[i-1];
    }

    a->arr[index] = data;
    printf("successfully inserted %d\n",a->arr[index]);
}

void deleteIndex(struct array *a, int index) {
    a->size--;
    printf("successfully deleted %d at index %d\n",a->arr[index], index );
    for(int i=index; i < a->size; i++) {
        a->arr[i] = a->arr[i+1];
    }
}









