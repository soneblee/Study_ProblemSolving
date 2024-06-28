/*
6자리의 고유번호에서 처음 5번째는 0부터 9까지
마지막 자리는 각 숫자들의 제곱의 합
*/

#include <stdio.h>

int main(){

    int number[7];

    for(int i=0; i<5; i++)
        scanf("%d", &number[i]);

    int num;

    num = (number[0]*number[0] + number[1]*number[1] + number[2]*number[2] + number[3]*number[3] + number[4]*number[4])%10;

    printf("%d\n", num);
    return 0;
}