#include <stdio.h>

int main(void){
    int n, i = 2;
    scanf("%d", &n);

    while(i <= n)
    {
        if(n == 1) break;
        if(n % i == 0)
        {
            n /= i;
            printf("%d\n", i);
            continue;
        }
        i++;
    }

}