#include <stdio.h>

int main(){
    int rec[100][100] = {0};
    int n, x, y, cnt = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d %d", &x, &y);
        for(int j = x; j < x+10; j++)
        {
            for(int k = y; k < y+10; k++)
            {
                rec[j][k] = 1;
            }
        }
    }

    for(int i = 0; i < 100; i++)
    {
        for(int j = 0; j < 100; j++)
        {
            if(rec[i][j] == 1)
                cnt++;
        }
    }

    printf("%d\n", cnt);

    return 0;
}