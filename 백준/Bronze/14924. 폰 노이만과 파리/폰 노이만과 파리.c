#include <stdio.h>

int main(){
    int s, t, d;
    scanf("%d %d %d", &s, &t, &d);
    
    int time = d / (2 * s);

    printf("%d", t*time);

    return 0;
}