#include <stdio.h>

int main(){
    int n, num[1000000];
    int min, max;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    min = num[0];
    max = num[0];

    for(int i = 0; i < n; i++)
    {
        if(min > num[i])
            min = num[i];
        if(max < num[i])
            max = num[i];
    }

    printf("%d %d", min, max);

    return 0;
}