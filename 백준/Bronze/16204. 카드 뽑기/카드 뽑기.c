#include <stdio.h>

int main(){
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);

    if(m<k)
        printf("%d", m + (n-k));
    else
        printf("%d", k + (n-m));

    return 0;
}