#include <stdio.h>

int main(){
    int x, y, w, h;

    scanf("%d %d %d %d", &x, &y, &w, &h);

    int num[4] = {x, y, w - x, h - y};
    int min = x;
    
    for(int i = 0; i < 4; i++)
    {
        if(num[i] < min)
            min = num[i];
    }

    printf("%d\n", min);

    return 0;
}