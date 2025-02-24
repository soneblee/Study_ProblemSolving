#include <stdio.h>

int main(void){
    int x, y, z, max;

    while(1){
        scanf("%d %d %d", &x, &y, &z);
        if(x == 0 && y == 0 && z == 0)
            break;
        
        if(x >= y && x >= z)
            max = x;
        else if(y >= x && y >= z)
            max = y;
        else if(z >= x && z >= y)
            max = z;

        if(x + y + z - max <= max)
            printf("Invalid\n");
        else if(x == y && y == z)
            printf("Equilateral\n");
        else if(x == y || y == z || x == z)
            printf("Isosceles\n");
        else if(x != y && y != z && x != z)
            printf("Scalene\n");
        
    }
}