#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);

    if(a < b)
        printf("%d", a + a - 1);
    else
        if(b < a - 1)
            printf("%d", b + b + 1);
        else
            printf("%d", a + a - 1);

    return 0;
}