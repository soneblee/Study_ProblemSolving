#include <stdio.h>

int main(){
    int y, m, d, cy, cm, cd;
    scanf("%d %d %d", &y, &m, &d);
    scanf("%d %d %d", &cy, &cm, &cd);

    if(y == cy)
        printf("0\n");
    else if(cm < m || (cm == m && cd < d))
        printf("%d\n", cy - y - 1);
    else if(cm > m || (cm == m && cd >= d))
        printf("%d\n", cy - y);


    printf("%d\n", cy - y + 1);
    printf("%d\n", cy - y);

    return 0;
}