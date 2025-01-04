#include <stdio.h>

int main(){
    int t[11], cnt = 1080, num;

    for(int i=0; i<10; i++)
    {
        scanf("%d", &t[i]);
        
        if(t[i] == 1)
            cnt += 90;
        else if(t[i] == 2)
            cnt += 180;
        else if(t[i] == 3)
            cnt -= 90;
    }
    if(num >= 0)
        num = cnt % 360;
    else
        num = cnt % -360;

    if(num == 0)
        printf("N");
    else if(num == 90)
        printf("E");
    else if(num == 180)
        printf("S");
    else if(num == 270)
        printf("W");

    return 0;
}