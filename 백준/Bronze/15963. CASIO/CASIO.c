#include <stdio.h>

int main(){
    int n, m; // 송찬이가 필요한 배터리 n 과 선생님이 가져온 배터리 m

    scanf("%d %d", &n, &m);

    if(n == m)
        printf("1");
    else
        printf("0");
    return 0;
}