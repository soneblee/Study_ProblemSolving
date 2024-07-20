#include <stdio.h>

int main(){
    long long r, c, n;
    scanf("%lld %lld %lld", &r, &c, &n);

    if(r%n == 0 && c%n ==0)
        printf("%lld", (r/n) * (c/n));
    else if(r%n == 0)
        printf("%lld", (r/n) * (c/n+1));
    else if(c%n == 0)
        printf("%lld", (r/n+1) * (c/n));
    else
        printf("%lld", (r/n+1) * (c/n+1));
    return 0;
}