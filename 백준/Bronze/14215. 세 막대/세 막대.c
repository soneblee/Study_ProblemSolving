#include <stdio.h>

int main(){
    int x, y, z, temp;
    scanf("%d %d %d", &x, &y, &z);
        
    if (x > y) { temp = x; x = y; y = temp; }
    if (y > z) { temp = y; y = z; z = temp; }
    if (x > y) { temp = x; x = y; y = temp; }

    if(z < x + y)
        printf("%d\n", x + y + z);
    else
        printf("%d\n", (x + y) * 2 - 1);
        
    return 0;
}