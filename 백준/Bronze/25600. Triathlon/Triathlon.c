#include <stdio.h>

int main(){
    int n, a[10000], d[10000], g[10000], sum[10000] = {0};

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &a[i], &d[i], &g[i]);

        if(a[i] == d[i] + g[i])
            sum[i] = 2 * a[i] * (d[i] + g[i]);
        else
            sum[i] = a[i] * (d[i] + g[i]);
    }

    int max = sum[0];

    for(int j = 0; j < n; j++)
    {
        if(sum[j] > max)
            max = sum[j];        
    }

    printf("%d", max);

    return 0;
}