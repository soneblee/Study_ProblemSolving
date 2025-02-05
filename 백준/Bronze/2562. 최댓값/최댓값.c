#include <stdio.h>

int main(){

    int max, max_i, num[10];

    for(int i = 0; i < 9; i++)
    {
        scanf("%d", &num[i]);
    }

    max = 0;
    max_i = 0;

    for(int i = 0; i < 9; i++)
    {
        if(max < num[i])
        {
            max = num[i];
            max_i = i + 1;
        }
    }

    printf("%d\n%d", max, max_i);    

    return 0;
}