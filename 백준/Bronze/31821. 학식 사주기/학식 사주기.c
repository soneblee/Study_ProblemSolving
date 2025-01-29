#include <stdio.h>

int main(){
    int n, m, price[11], num[11], sum = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &price[i]);
    }

    scanf("%d", &m);

    for(int i = 0; i < m; i++)
    {
        scanf("%d", &num[i]);
    }

    for(int i = 0; i < m; i++)
    {
        sum += price[num[i] - 1];
    }

    printf("%d", sum);

    return 0;
}