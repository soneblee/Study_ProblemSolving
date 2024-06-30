/*
가격 대비 성능 = 성능/가격
WARBOY 의 성능은 경쟁사 제품의 3배
*/

#include <stdio.h>

int main(){
    int a, b, c; // 경쟁사 제품의 가격, 경쟁사 제품의 성능, WARBOY의 가격

    int i; // 경쟁사 제품의 가격 대비 성능
    
    scanf("%d %d %d", &a, &b, &c);

    i = b / a;

    printf("%d", c * 3 * i);  
    
    return 0;
}

/*
내가 출력해야 할 것은 = 가격 대비 성능 * 가격
가격 대비 성능 = 3 * i
가격 = c
*/