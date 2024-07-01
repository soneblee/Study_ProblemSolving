/*
스위트콘의 가격은 a(100의 배수), 부가 가치세 10%를 포함하면 b원
b(11의 배수)를 입력하면 원가 a를 구하는 프로그램
*/

#include <stdio.h>

int main(){
    int a, b;

    scanf("%d", &b);

    a = b * 100/110;
    
    printf("%d", a);

    return 0;
}