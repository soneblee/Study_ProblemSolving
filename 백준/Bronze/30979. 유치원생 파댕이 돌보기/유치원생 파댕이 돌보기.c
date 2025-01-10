#include <stdio.h>

int main(){
    int t, n, f[101], num = 0;

    scanf("%d", &t); // 돌봐야 할 시간
    scanf("%d", &n); // 사탕의 총 개수

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &f[i]); // 사탕의 맛
        num += f[i];
    }
   

    if(t > num)
        printf("Padaeng_i Cry");
    else
        printf("Padaeng_i Happy");

    return 0;
}