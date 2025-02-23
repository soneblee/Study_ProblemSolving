#include <stdio.h>

int main(void){
    int n, x[100000], y[100000];
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d %d", &x[i], &y[i]);
    }

    int x_max = x[0];
    int x_min = x[0];
    int y_max = y[0];
    int y_min = y[0];

    for(int i = 0; i < n; i++)
    {
        if(x[i] > x_max)
            x_max = x[i];

        if(y[i] > y_max)
            y_max = y[i];

        if(x[i] < x_min)
            x_min = x[i];
        
        if(y[i] < y_min)
            y_min = y[i];
    }

    int sum = (x_max - x_min) * (y_max - y_min);

    printf("%d\n", sum);

}