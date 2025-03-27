#include <stdio.h>

int num[100000];
int top = -1;

void push(int data)
{
    num[++top] = data;
}

void pop()
{
    num[top--] = 0;
}

int main(){
    int k, data;
    scanf("%d", &k);

    for(int i = 0; i < k; i++)
    {
        scanf("%d", &data);
        if(data == 0)
            pop();
        else
            push(data);
    }

    int sum = 0;
    for(int i = 0; i < k; i++)
    {
        sum += num[i];
    }

    printf("%d\n", sum);

    return 0;
}