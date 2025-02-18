#include <stdio.h>

int main(){
    int n, k, j = 0, num[10000];
    scanf("%d %d", &n, &k);

    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            num[j] = i;
            j++;
        }    
    }

    if(k <= j)
        printf("%d\n", num[k-1]);
    else
        printf("0\n");
    return 0;
}