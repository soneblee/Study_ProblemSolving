#include <stdio.h>

int main(){
    int n, w, h, l;
    scanf("%d %d %d %d", &n, &w, &h, &l);

    int num = (w/l)*(h/l);

    if(num < n)
        printf("%d", num);
    else
        printf("%d", n);

    return 0;
}