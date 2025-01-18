#include <stdio.h>

int main(){
    int a, p, c;
    scanf("%d %d %d", &a, &p, &c);

    if(a + c > p)
        printf("%d", a + c);
    else
        printf("%d", p);

    return 0;
}