/*
첫 줄에 문제의 정수 
$N$이 주어집니다. 
$(5 \le N \le 100)$ 

출력
세 줄을 출력하세요.

첫 줄에는 
$1$부터 
$N$까지 수의 합 
$1+2+\cdots+N$을 출력하세요.
둘째 줄에는 
$1$부터 
$N$까지 수의 합을 제곱한 수 
$(1+2+\cdots+N)^2$을 출력하세요.
셋째 줄에는 
$1$부터 
$N$까지 수의 세제곱의 합 
$1^3+2^3+\cdots+N^3$을 출력하세요.
*/

#include <stdio.h>

int main(){

    int n;
    int num = 0;
    int num2 = 0;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        num += i;
        num2 += (i*i*i);
    }

    printf("%d\n", num);
    printf("%d\n", num * num);
    printf("%d\n", num2);

    return 0;

}