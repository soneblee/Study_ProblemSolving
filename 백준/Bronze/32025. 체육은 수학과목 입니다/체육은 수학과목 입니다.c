#include <stdio.h>

int main(){

    int h, w, num = 0;

    scanf("%d %d", &h, &w);

    if(h < w)
        num = h * 100;
    else
        num = w * 100;

    printf("%d\n", num / 2);

    return 0;
}