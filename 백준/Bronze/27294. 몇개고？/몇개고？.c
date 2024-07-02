#include <stdio.h>

int main(){

    int t, s;
    scanf("%d %d", &t, &s);

    if(s == 1)
        printf("280");
    else if (t<17 && t > 11 && s == 0)
        printf("320");
    else
        printf("280");



    return 0;
}