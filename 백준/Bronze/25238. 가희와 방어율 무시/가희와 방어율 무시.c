#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    
    if (a * (100-b)/100 < 100)
        printf("1");
    else
        printf("0");

    return 0;
}