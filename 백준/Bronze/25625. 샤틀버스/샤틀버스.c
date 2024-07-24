#include <stdio.h>

int main(){
    int x, y;
    scanf("%d %d", &x, &y);

    if(y<x)
        printf("%d", x+y);
    else
        printf("%d", y-x);

    return 0;
}