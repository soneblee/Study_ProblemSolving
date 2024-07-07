/*
w = a(x-1) + b

w = 필요한 물의 양
a = 라면 계수
x = 끓일 하면의 개수
b = 기본 물의 양
*/

#include <stdio.h>

int main(){
    int n, w, a, x, b;

    scanf("%d", &n); // 라면 끓이는 횟수

    for(int i=0; i<n; i++){
        scanf("%d %d %d", &a, &b, &x);
        w = a * (x - 1) + b;
        printf("%d\n",w);
    }

   

    return 0;
}