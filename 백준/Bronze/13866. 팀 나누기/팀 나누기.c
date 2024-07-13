#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    // 입력값을 크기작은 순으로 받음

    printf("%d", abs((a+d) - (b+c)));
    //abs: 절대값을 반환하는 함수
    
    return 0;
}