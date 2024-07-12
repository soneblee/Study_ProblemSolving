// 입력받은 시간을 초로 변환 후 계산한 다음 다시 시, 분, 초 로 변환
#include <stdio.h>

int main(){
    int h1, m1, s1, h2, m2, s2;
    int num1 = 0, num2 = 0;
    for(int i=0; i<3; i++){
        scanf("%d %d %d %d %d %d", &h1, &m1, &s1, &h2, &m2, &s2);
        
        num1 = 3600*h1 + 60*m1 + s1;
        num2 = 3600*h2 + 60*m2 + s2;

        int t = num2 - num1;

        printf("%d %d %d\n", t/3600, (t%3600)/60, (t%3600)%60);
    }

    return 0;
}