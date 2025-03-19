#include <stdio.h>

int main(){
    int m, n, min = 0, sum = 0;
    int index = 0;
    scanf("%d %d", &m, &n);

    for(int i = m; i <= n; i++)
    {
        for(int j = 2; j <= i; j++)
        {
            if(i % j == 0)
            {
                if(i == j)
                {
                    sum += i;
                    index++;
                
                    if(index == 1)
                        min = i;
                    break;
                }
                else break;
            }

        }
    }

    if(sum == 0)
        printf("-1\n");
    else
        printf("%d\n%d", sum, min);

    return 0;
}