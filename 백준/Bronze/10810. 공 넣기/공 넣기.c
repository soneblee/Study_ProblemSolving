#include <stdio.h>

int main(){
    int n, m, x, y, z;
    int num[101] = {0};

    scanf("%d %d", &n, &m);

    for(int i = 0; i < m; i++)
    {
        scanf("%d %d %d", &x, &y, &z);

        for(int j = x; j < y + 1; j++)
        {
            num[j] = z;
        }

    }

    for(int i = 1; i < n + 1; i++)
    {
        printf("%d ", num[i]);
    }
    return 0;
}