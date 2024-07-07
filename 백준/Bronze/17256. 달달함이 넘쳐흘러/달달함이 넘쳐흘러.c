/*
a.x = b.x, a.y = b.y, a.z = b.z

a cake b =(a.z + b.x, a.y * b.y, a.x + b.z)

a cake b = c 일 때, 다음을 만족하는 케이크 수 b를 계산 
*/

#include <stdio.h>

int main(){
    int ax, ay, az;
    int cx, cy, cz, c;
    
    int bx, by, bz;

    scanf("%d %d %d", &ax, &ay, &az);
    scanf("%d %d %d", &cx, &cy, &cz);

    bx = cx - az;
    by = cy / ay;
    bz = cz - ax;

    printf("%d %d %d", bx, by, bz);

    return 0;
}