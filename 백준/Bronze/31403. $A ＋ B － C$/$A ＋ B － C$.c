#include <stdio.h>

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n", a+b-c);

    if(b<10)
        printf("%d", 10*a+b - c);
    else if(b<100)
        printf("%d", 100*a+b - c);
    else if(b<1000)
        printf("%d", 1000*a+b - c);
    else
        printf("%d", 10000*a+b - c);

    return 0;
}