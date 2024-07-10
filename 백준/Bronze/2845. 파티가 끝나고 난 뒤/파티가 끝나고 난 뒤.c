#include <stdio.h>

int main(){
    int l, m, a;
    scanf("%d %d", &l, &m);

    for(int i=0; i<5; i++){
        scanf("%d", &a);
        printf("%d ", a - l*m);

    }
    
    return 0;
}