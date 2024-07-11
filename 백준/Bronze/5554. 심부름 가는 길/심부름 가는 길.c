#include <stdio.h>

int main(){
    int sec, x, y;
    int num = 0;

    for(int i=0; i<4; i++){
        scanf("%d", &sec);
        num += sec;
    }
    printf("%d\n%d", num/60, num%60);
    return 0;
}