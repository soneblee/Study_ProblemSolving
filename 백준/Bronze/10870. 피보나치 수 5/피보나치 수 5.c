#include <stdio.h>

int fi(int n)
{
    if(n > 1)
        return fi(n-1) + fi(n-2);
    else if(n == 1)
        return 1;
    else
        return 0;
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d", fi(n));
    return 0;
}