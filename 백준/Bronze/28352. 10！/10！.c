#include <stdio.h>

int main(){
    long long n, sum = 1;
    
    scanf("%lld", &n);

    for(int i=n; i>0; i--)
    {
        sum *= i;
    }

    printf("%lld", sum / 7 / 24 / 60 / 60);
    
    return 0;
}