#include <stdio.h>

int main(){
    int b1, b2, b3, j1, j2;
    int set1, set2 = 0;

    scanf("%d\n%d\n%d", &b1, &b2, &b3);
    scanf("%d\n%d", &j1, &j2); 

    if(b1<=b2 && b1<=b3)
        set1 = b1;
    else if(b2<=b1 && b2<=b3)
        set1 = b2;
    else if(b3<=b1 && b3<=b2)
        set1 = b3;

    if(j1<=j2)
        set2 = j1;
    else
        set2 = j2;

    printf("%d", set1 + set2 - 50);

    return 0;
}