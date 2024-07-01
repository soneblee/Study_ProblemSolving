/*
지금 버스 정류소에 서 있는데, 지하철 역까지 걸어가서 지하철을 타는 것이 버스보다 빠를 수 있다
a분 뒤에 버스 도착
b분 뒤에 열차 도착
n분: 지하철 승강장까지 걸어가는데 걸리는 시간 n<=b
*/

#include <stdio.h>

int main(){

    int a, b, n;

    scanf("%d %d %d", &n, &a, &b);
    if(b < a){
        printf("Subway");
    }else if(a < b){
        printf("Bus");
    }else
        printf("Anything");
    


    return 0;
}