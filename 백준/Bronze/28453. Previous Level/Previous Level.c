#include <stdio.h>

int main(){
    int num, level[300];

    scanf("%d", &num);

    for(int i = 0; i < num; i++)
    {
        scanf("%d", &level[i]);

        if(level[i] < 250)
            printf("4 ");
        else if(level[i] < 275 && level[i] >= 250)
            printf("3 ");
        else if(level[i] < 300 && level[i] >= 275)
            printf("2 ");
        else if(level[i] == 300)
            printf("1 ");
    } 

    return 0;
}