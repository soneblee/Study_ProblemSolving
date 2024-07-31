#include <stdio.h>

int main(){
    int n, t;
    int num = 0, cnt = 0;

    scanf("%d", &n);

    for (int i=0; i<n; i++)
    {
        scanf("%d", &t);
        num += t;
    }

    cnt = num + 8 * (n-1);

    int day = cnt / 24;
    int hour = cnt % 24;

    printf("%d %d", day, hour);

    return 0;
}