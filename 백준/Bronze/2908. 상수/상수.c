#include <stdio.h>

int main(){
    int n, m, n2, m2;
    int sum = 0;
    scanf("%d %d", &n, &m);

    int a = n % 10;
    int b = (n / 10) % 10;
    int c = n / 100;
    int a2 = m % 10;
    int b2 = (m / 10) % 10;
    int c2 = m / 100;
    n2 = a * 100 + b * 10 + c;
    m2 = a2 * 100 + b2 * 10 + c2;

    if(n2 > m2)
        printf("%d", n2);
    else
        printf("%d", m2);

    return 0;
}