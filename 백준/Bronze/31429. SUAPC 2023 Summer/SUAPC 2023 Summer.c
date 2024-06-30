/*
스코어 보드를 보고 입력한 등수에 따른 푼 문제수 & 푼 문제들의 페널티의 합 출력
*/

#include <stdio.h>

int main(){
    int n; // 등수

    scanf("%d", &n);

switch (n)
{
case 1:
    printf("12 1600");
    break;
case 2:
    printf("11 894"); break;
case 3:
    printf("11 1327"); break;
case 4:
    printf("10 1311");
    break;
case 5:
    printf("9 1004");
    break;
case 6:
    printf("9 1178");
    break;
case 7:
    printf("9 1357");
    break;
case 8:
    printf("8 837");
    break;
case 9:
    printf("7 1055");
    break;
case 10:
    printf("6 556");
    break;
case 11:
    printf("6 773");
    break;    
default:
    break;
}
    

    return 0;
}