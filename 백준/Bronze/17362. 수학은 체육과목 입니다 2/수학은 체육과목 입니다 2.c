/*
규칙: 1~8까지 1, 2, 3, 4, 5, 4, 3, 2가 반복됨
n을 8로 나눈 나머지 1~5일 때: 그래도
6~7일 때: 10 - n
0일 때: (10-n) % 8 == 2
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    n %= 8;
    printf("%d", n > 5 || !n ? (10 - n) % 8 : n);
    return 0;
}