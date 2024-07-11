#include <stdio.h>

int main(){
    int a, b, c, d, e, f, g, h;
    int num1, num2;

    scanf("%d %d %d %d", &a, &b, &c, &d);
    scanf("%d %d %d %d", &e, &f, &g, &h);
   
    num1 = a + b + c + d;
    num2 = e + f + g + h;

    if(num1<num2)
        printf("%d", num2);
    else
        printf("%d", num1);

    return 0;
}