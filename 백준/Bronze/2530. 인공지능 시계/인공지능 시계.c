#include <stdio.h>

int main(){
    int a, b, c, d;
    scanf("%d %d %d", &a, &b, &c);
    scanf("%d", &d);

    int time = 3600*a + 60*b + c + d; 

    if(time/3600>23)
        printf("%d %d %d", (time/3600)%24, (time%3600)/60, (time%3600)%60);
    else
        printf("%d %d %d", time/3600, (time%3600)/60, (time%3600)%60);


    return 0;

}