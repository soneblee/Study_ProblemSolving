#include <stdio.h>

int main(){
    int v, a, b;
    scanf("%d %d %d", &a, &b, &v);

    int sum = a - b;
    int day = (v - b + sum - 1) / sum;

    printf("%d\n", day);
    return 0;
}