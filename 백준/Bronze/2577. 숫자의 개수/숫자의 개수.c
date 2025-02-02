#include <stdio.h>

int main(){
    int a, b, c, sum, result;
    int num[10] = {0};

    scanf("%d %d %d", &a, &b, &c);

    sum = a * b * c;

    while(sum > 0)
    {
        result = sum % 10; // 각 자리수 저장
        num[result]++; // 각 자리수의 개수만큼 num에 저장
        sum /= 10;
    }

    for(int i = 0; i < 10; i++)
    {
        printf("%d\n", num[i]);
    }

    return 0;
}