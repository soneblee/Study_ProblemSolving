// %1d 로 입력받으면 가장 처음 입력된 정수 한자리만 입력이 됨

#include <stdio.h>

int main(){
    int n, m;
    scanf("%d", &n);
    int num = 0;

    for(int i=0; i<n; i++){
        scanf("%1d", &m);
        num += m;
    }

    printf("%d", num);

    return 0;
}