#include <stdio.h>

int main(){
    int a, b, k, x, cnt=0;
    
    scanf("%d %d", &a, &b);
    scanf("%d %d", &k, &x);

    for(int i=k-x; i<k+x+1; i++)
    {
        if(i<a || i>b) continue;
        cnt++;
    }    

    if(cnt == 0)
        printf("IMPOSSIBLE");
    else
        printf("%d", cnt);

    return 0;
}