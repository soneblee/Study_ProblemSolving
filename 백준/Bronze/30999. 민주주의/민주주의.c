#include <stdio.h>

int main(){
    int n, m, count = 0;
    char opi[100];

    scanf("%d %d", &n, &m);

    for(int i = 0; i < n; i++)
    {
        int cnt = 0;
        for(int j = 0; j < m; j++)
        {
            scanf(" %c", &opi[j]);

            if(opi[j] == 'O')
                cnt++;
        }
        if(cnt > m / 2)
            count++;
    }

    printf("%d\n", count);

    return 0;
}