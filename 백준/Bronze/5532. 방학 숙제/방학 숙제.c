#include <stdio.h>

int main(){
    int l, a, b, c, d;
    scanf("%d %d %d %d %d", &l, &a, &b, &c, &d);

    if(b/d > a/c){
        if(b%d == 0)
            printf("%d", l - b/d);
        else
            printf("%d", l - b/d - 1);
    }
    else{
        if(a%c == 0)
            printf("%d", l - a/c);
        else
            printf("%d", l - a/c - 1);
    }

    return 0;
}

