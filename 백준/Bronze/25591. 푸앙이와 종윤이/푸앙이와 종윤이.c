#include <stdio.h>

int main(){
    int x, y, a, b, c, d, q, r;
    scanf("%d %d", &x, &y);

    a = 100 - x;
    b = 100 - y;
    c = 100 - (a + b);
    d = a * b;
    q = d / 100;
    r = d % 100;

    printf("%d %d %d %d %d %d\n", a, b, c, d, q, r);

    if(d > 99)
        printf("%d %d", c + q, r);
    else
        printf("%d %d", c, d);
        


    return 0;
}