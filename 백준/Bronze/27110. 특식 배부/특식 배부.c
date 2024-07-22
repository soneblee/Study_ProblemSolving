#include <stdio.h>

int main(){
    int n, a, b, c;
    int sum1=0, sum2=0, sum3=0;

    scanf("%d %d %d %d", &n, &a, &b, &c);

    if(a<n)
        sum1 = a;
    else
        sum1 = n;

    if(b<n)
        sum2 = b;
    else
        sum2 = n;

    if(c<n)
        sum3 = c;
    else
        sum3 = n;

    printf("%d", sum1 + sum2 + sum3);

    return 0;
}