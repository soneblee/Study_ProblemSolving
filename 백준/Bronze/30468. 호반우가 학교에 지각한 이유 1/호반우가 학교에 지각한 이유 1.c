#include <stdio.h>

int main(){
    int i, j, k, l, n, num;

    scanf("%d %d %d %d %d", &i, &j, &k, &l, &n);
    
    int sum = i + j + k + l;

    if(sum/4 < n)
        num = 4 * n - sum;
    else
        num = 0;

    printf("%d", num);

    return 0;
}