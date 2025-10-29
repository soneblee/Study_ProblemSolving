#include <stdio.h>

int main(void){
    int n, sum = 1;
    scanf("%d", &n);

    if(n == 0 || n == 1)
        printf("1");
    else
    {
        for(int i = n; i > 0; i--)
        {
            sum *= i;
        }

        printf("%d", sum);
    }


    return 0;
}