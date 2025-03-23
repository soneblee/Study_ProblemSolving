#include <stdio.h>
#include <math.h>

int main(void){
    int n, sum = 2;
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        sum += pow(2, i);
    }

    printf("%d\n", sum * sum);
}