#include <stdio.h>

int main(){

    int n; // 0이면 영문명 출력 1이면 슬로건 출력

    scanf("%d", &n);
    if(n == 0)
        printf("YONSEI");
    if(n == 1)
        printf("Leading the Way to the Future");

    return 0;
}