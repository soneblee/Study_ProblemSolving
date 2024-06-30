#include <stdio.h>

int main(){

    int n; // 100원짜리 동전의 개수
    int m; // 초코바의 가격

    scanf("%d %d", &n, &m);

    if(n*100 >= m)
        printf("Yes");
    else
        printf("No");

    return 0;
}