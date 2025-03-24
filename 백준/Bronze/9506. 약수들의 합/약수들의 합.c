#include <stdio.h>

int main(){
    int n;

    while(1)
    {
        int num[100] = {0};
        int sum = 0, cnt = 0;

        scanf("%d", &n);
        if(n == -1 || n < 3 || n > 99999) break;
        
        for(int i = 1; i < n; i++)
        {
            if(n % i == 0)
            {
                num[cnt] = i;
                sum += i;
                cnt++;
            }
        }

        if(n == sum)
        {
            printf("%d = ", n);

            for(int j = 0; j < cnt; j++)
            {
                printf("%d", num[j]);
                if(j != cnt -1)
                    printf(" + ");
            }
            printf("\n");
        }

        else
            printf("%d is NOT perfect.\n", n);
    }
}