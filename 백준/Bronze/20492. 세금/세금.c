#include <stdio.h>

int main(){
    float money;

    scanf("%f", &money);
    printf("%0.f %0.f", 0.78 * money, money - 0.2 * 0.22 * money);

    return 0;
}