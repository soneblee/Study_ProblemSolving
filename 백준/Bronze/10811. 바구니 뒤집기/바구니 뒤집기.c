#include <stdio.h>

int main(){
    int n, m, x, y, num[101], sum[101];
    scanf("%d %d", &n, &m);

    for(int i = 1; i < n + 1; i++)
    {
        num[i] = i;
        sum[i] = i;
    }

    for(int i = 0; i < m; i++)
    {
        scanf("%d %d", &x, &y);

        int stop = x;
        int start = y;

        for(x = stop, y = start; y >= stop; y--, x++)
        {
            sum[y] = num[x];
        }

        for(int j = 1; j < n + 1; j++)
        {
            num[j] = sum[j];
        }
        
    }

    for(int i = 1; i < n + 1; i++)
    {
        printf("%d ", sum[i]);
    }

    return 0;
}