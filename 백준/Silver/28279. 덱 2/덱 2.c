#include <stdio.h>
#include <stdlib.h>

#define MAX_DEQUE_SIZE 1000000
typedef int element;

typedef struct {
    int front;
    int rear;
    int size;
    element data[MAX_DEQUE_SIZE];
} DequeType;

void init_deque(DequeType* dq) {
    dq->front = dq->rear = 0;
    dq->size = MAX_DEQUE_SIZE;
}

int is_empty(DequeType* dq) {
    return dq->front == dq->rear;
}

void add_rear(DequeType* dq, element item) {
    dq->rear = (dq->rear + 1) % MAX_DEQUE_SIZE;
    dq->data[dq->rear] = item;
}

void add_front(DequeType* dq, element item) {
    dq->data[dq->front] = item;
    dq->front = (dq->front - 1 + MAX_DEQUE_SIZE) % MAX_DEQUE_SIZE;
}

element delete_front(DequeType* dq) {
    if (is_empty(dq)) return -1;
    dq->front = (dq->front + 1) % MAX_DEQUE_SIZE;
    return dq->data[dq->front];
}

element delete_rear(DequeType* dq) {
    if (is_empty(dq)) return -1;
    int old_rear = dq->rear;
    dq->rear = (dq->rear - 1 + MAX_DEQUE_SIZE) % MAX_DEQUE_SIZE;
    return dq->data[old_rear];
}

int print_size(DequeType* dq) {
    return (dq->rear - dq->front + dq->size) % dq->size;
}

int is_front(DequeType* dq) {
    if (is_empty(dq)) return -1;

    return dq->data[(dq->front + 1) % dq->size];
}

int is_rear(DequeType* dq) {
    if (is_empty(dq)) return -1;

    return dq->data[dq->rear];
}

int main() {
    int n, order;
    DequeType dq;
    element item;
    init_deque(&dq);

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &order);
        if(order == 1){
            scanf("%d", &item);
            add_front(&dq, item);
        }
        else if(order == 2){
            scanf("%d", &item);
            add_rear(&dq, item);
        }
        else if(order == 3)
            printf("%d\n", delete_front(&dq));
        else if(order == 4)
            printf("%d\n", delete_rear(&dq));
        else if(order == 5)
            printf("%d\n", print_size(&dq));
        else if(order == 6)
            printf("%d\n", is_empty(&dq));
        else if(order == 7)
            printf("%d\n", is_front(&dq));
        else if(order == 8)
            printf("%d\n", is_rear(&dq));
    }
    return 0;
}