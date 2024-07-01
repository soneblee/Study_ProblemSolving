#include <stdio.h>

int main(){
    float w, h; // 밑변의 길이, 높이 선언
    
    scanf("%f %f", &w, &h);

    printf("%.1f", w * h / 2);

    return 0;
}