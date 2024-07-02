#include <stdio.h>

int main(){
    int n, m; // 1000000 이하

    while(1){
        scanf("%d %d", &n, &m);
        if(n == 0 && m ==0)
            break;
        
        if(n>m)
            printf("Yes\n");
        else
            printf("No\n");
    }


    return 0;
}