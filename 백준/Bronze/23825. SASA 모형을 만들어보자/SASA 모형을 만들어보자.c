#include <stdio.h>

int main(){
    int n, m;
    scanf("%d %d", &n, &m);

    int num1 = n / 2;
    int num2 = m / 2;

    if(num1 > num2)
        printf("%d", num2);
    else
        printf("%d", num1);

    return 0;
}