#include <stdio.h>

int main(){
    int n, x, price[100001], min, final_min;
    scanf("%d %d", &n, &x);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &price[i]);
    }

    min = price[0] + price[1];

    for(int j = 0; j < n - 1; j++)
    {
        final_min = price[j] + price[j+1];
        if(final_min < min)
            min = final_min;
    }

    printf("%d", min * x);

    return 0;
}