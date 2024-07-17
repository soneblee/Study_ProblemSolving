#include <stdio.h>

int main(){

    int money, num = 0;
    while(1){
        scanf("%d", &money);
        if(money == -1) break;
        num += money;
    }

    printf("%d", num);
    return 0;
}