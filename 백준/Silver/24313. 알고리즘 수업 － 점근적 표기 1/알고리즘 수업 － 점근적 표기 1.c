#include <stdio.h>

int main(){
    int a1, a0, c, n;
    scanf("%d %d %d %d", &a1, &a0, &c, &n);

    int f = a1 * n + a0;
    int g = c * n;

    if(f <= g && a1 <= c)
        printf("1\n");
    else
        printf("0\n");

    return 0;
}