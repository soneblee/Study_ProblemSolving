#include <stdio.h>

int main(void){
    int t;
    int c, q, d, n, p;
    scanf("%d", &t);

    for(int i = 0; i < t; i++)
    {
        scanf("%d", &c);

        q = c / 25;
        c = c - 25 * q;
        d = c / 10;
        c = c - 10 * d;
        n = c / 5;
        c = c - 5 * n;
        p = c / 1;
        
        printf("%d %d %d %d\n", q, d, n, p);
    }
}