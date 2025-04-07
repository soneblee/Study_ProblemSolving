#include <stdio.h>
#include <string.h>

#define MAX_SIZE 2000000

typedef int element;

typedef struct {
    int front;
    int rear;
    element data[MAX_SIZE];
} QueueType;

void init_queue(QueueType* q) {
    q->front = -1;
    q->rear = -1;
}

int is_empty(QueueType* q) {
    return q->rear == q->front;
}

int size(QueueType* q) {
    return q->rear - q->front;
}

void enqueue(QueueType* q, element item) {
    q->data[++(q->rear)] = item;
}

element dequeue(QueueType* q) {
    if (is_empty(q)) {
        return -1; 
    }
    return q->data[++(q->front)];
}

element front(QueueType* q) {
    if (is_empty(q)) {
        return -1;
    }
    return q->data[q->front + 1];
}

element back(QueueType* q) {
    if (is_empty(q)) {
        return -1;
    }
    return q->data[q->rear];
}

int main() {
    QueueType q;
    init_queue(&q);
    element item;
    int n;
    char order[20];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s", order);

        if (strcmp(order, "push") == 0) {
            scanf("%d", &item);
            enqueue(&q, item);
        }
        else if (strcmp(order, "pop") == 0) {
            printf("%d\n", dequeue(&q));
        }
        else if (strcmp(order, "size") == 0) {
            printf("%d\n", size(&q));
        }
        else if (strcmp(order, "empty") == 0) {
            printf("%d\n", is_empty(&q));
        }
        else if (strcmp(order, "front") == 0) {
            printf("%d\n", front(&q));
        }
        else if (strcmp(order, "back") == 0) {
            printf("%d\n", back(&q));
        }
    }

    return 0;
}