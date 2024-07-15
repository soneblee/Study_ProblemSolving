#include <stdio.h>

int main(){
    int n, a, b;
    scanf("%d %d %d", &n, &a, &b);

    if(n<=1000 && n <= a/2+b)
        printf("%d", n);
    else if(n<=1000 && n > a/2+b)
        printf("%d", a/2+b);
    return 0;
}