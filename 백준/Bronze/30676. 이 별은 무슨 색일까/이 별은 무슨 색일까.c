#include <stdio.h>

int main(){
    int n;

    scanf("%d", &n);

    if(n >= 620 && n<=780)
        printf("Red");
    if(n >= 590 && n<620)
        printf("Orange");
    if(n >= 570 && n<590)
        printf("Yellow");
    if(n >= 495 && n<570)
        printf("Green");
    if(n >= 450 && n<495)
        printf("Blue");
    if(n >= 425 && n<450)
        printf("Indigo");
    if(n >= 380 && n<425)
        printf("Violet");

    return 0;
}