#include <stdio.h>

int main(){
    int a, b, c;

    scanf("%d %d", &a, &b);
    scanf("%d", &c);

    if(a + b < c*2)
        printf("%d", a+b);
    else
        printf("%d", a+b - c*2);

    return 0;
}