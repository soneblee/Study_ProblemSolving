#include <stdio.h>

int main(){
    int p[4] = {0};
    int x, y, r;
    int n=0;

    for(int i=0; i<4; i++)
        scanf("%d", &p[i]);

    scanf("%d %d %d", &x, &y, &r);

    for(int i=0; i<4; i++)
    {
        if (p[i] == x)
            n = i+1;
    }

    printf("%d", n);

    return 0;
}