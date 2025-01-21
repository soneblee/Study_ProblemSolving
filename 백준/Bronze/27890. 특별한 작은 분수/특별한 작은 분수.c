#include <stdio.h>

int main(){
    int height, n;
    scanf("%d %d", &height, &n);

    for(int i = 0; i < n; i++)
    {
        if(height % 2 == 0)
            height = (height / 2) ^ 6;
        else
            height = (2 * height) ^ 6;
    }

    printf("%d\n", height);

    return 0;
}