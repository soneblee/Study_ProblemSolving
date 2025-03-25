#include <stdio.h>

int main(){
    long n, i, num, sum = 1;
    scanf("%ld", &n);

    for(i = 0; i < n; i++)
    {
        sum += (6 * i);

        if(sum >= n)
        {
            num = i;
            break;
        }
    }

    printf("%ld\n", num + 1);

    return 0;
}