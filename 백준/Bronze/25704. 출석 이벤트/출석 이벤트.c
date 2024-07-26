#include <stdio.h>

int main(){
    int n, p;
    scanf("%d %d", &n ,&p);

    if(n < 5)
    {
        printf("%d", p);
    }
    else if(n < 10 && n > 4)
    {
        if(p < 500)
            printf("0");
        else
            printf("%d", p - 500);
    }
    else if(n > 9 && n < 15)
    {
        if(p - 500 < 0.9 * p)
        {
            if(p < 500)
                printf("0");
            else
                printf("%d", p - 500);
        }
        else
            printf("%.0f", 0.9 * p);
    }
    else if(n > 14 && n < 20)
    {
        if(p < 2000)
            printf("0");
        else if(p - 2000 < 0.9 * p)
            printf("%d", p - 2000);
        else
            printf("%.0f", 0.9 * p);
    }
    else if(n > 19)
    {   
        if(p - 2000 < 0.75 * p)
        {
            if(p < 2000)
                printf("0");
            else
                printf("%d", p - 2000);
        }
        else
            printf("%.0f", 0.75 * p);
    }      
        
    return 0;
}