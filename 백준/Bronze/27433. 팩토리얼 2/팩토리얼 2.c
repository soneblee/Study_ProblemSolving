#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    long long num = 1;

    if(n == 0)
        printf("%lld", num);
    else{

    for(int i=n; i>0; i--){
        num *= i;
    }

    printf("%lld", num);
    }

    return 0;
}