#include <stdio.h>

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int num = a + b + c;

    if(a == 60 && b == 60 && c == 60)
        printf("Equilateral");
    else if(num == 180 && (a == b || b ==c || a == c))
        printf("Isosceles");
    else if(num == 180 && (a != b && b != c && a != c ))
        printf("Scalene");
    else if(num != 180)
        printf("Error");

    return 0;
}