#include <stdio.h>

int main(){
    int t, num[101];

    scanf("%d", &t);

    for(int i = 0; i < t; i ++)
    {
        scanf("%d", &num[i]);

    }

    for(int j = 0; j < t; j++)
    {
        if(num[j] < 5)
        {
            for(int k = 0; k < num[j]; k ++)
            {
                printf("|");
            }
            printf("\n");
        }
        else
        {
            for(int l = 0; l < num[j] / 5; l++)
            {
                printf("++++ ");
            }

            for(int m = 0; m < num[j] % 5; m++)
            {
                printf("|");
            }

            printf("\n");
        }

    }

    return 0;
}