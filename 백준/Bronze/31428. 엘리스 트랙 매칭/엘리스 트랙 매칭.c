#include <stdio.h>

int main(){
    int n, cnt = 0;
    char friend[10001], me;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf(" %c", &friend[i]);
    }

    getchar();
    scanf("%c", &me);

    for(int j = 0; j < n; j++)
    {
        if(friend[j] == me)
            cnt++;
    }

    printf("%d\n", cnt);

    return 0;
}