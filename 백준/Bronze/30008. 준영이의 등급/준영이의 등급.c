#include <stdio.h>

int main(){
    int n, k, p, result, g[20];

    scanf("%d %d", &n, &k);

    for(int i = 0; i < k; i++)
    {
        scanf("%d", &g[i]);

        p = g[i] * 100 / n;

        if(p < 5)
            result = 1;
        else if(p < 12)
            result = 2;
        else if(p < 24)
            result = 3;
        else if(p < 41)
            result = 4;
        else if(p < 61)
            result = 5;
        else if(p < 78)
            result = 6;
        else if(p < 90)
            result = 7;
        else if(p < 97)
            result = 8;
        else
            result = 9;

        printf("%d ", result);
    }

    return 0;
}