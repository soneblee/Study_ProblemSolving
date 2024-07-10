#include <stdio.h>

int main(){
    int s, d;
    scanf("%d %d", &s, &d);

    int a = (s+d) / 2;
    int b = (s-d) / 2;

    if(a+b != s|| a-b != d || ((s+d)%2 != 0 && (s-d)%2 != 0) || a<0 || b<0)
        printf("-1");
        
    else
        printf("%d %d", a, b);
        
    return 0;
}