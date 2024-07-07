#include <stdio.h>
#include <string.h>

// 재환이의 ah 가 의사의 ah 보다 같거나 길면 go, 아니면 no

int main(){
    int n;
    char jh[1000];
    char doctor[1000];

    scanf("%s", jh);
    scanf("%s", doctor);

    int a = strlen(jh);
    int b = strlen(doctor);

    if(a<b)
        printf("no");
    else
        printf("go");
    return 0;
}