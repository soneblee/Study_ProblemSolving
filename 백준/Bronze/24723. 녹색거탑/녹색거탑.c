#include <stdio.h>

int main(){
    int n, num=1;
    scanf("%d", &n);
    /*
    1 -> 2
    2 -> 4
    3 -> 8
    */
    for(int i=0; i<n; i++){
        num *= 2;
    }
    printf("%d", num);


    return 0;
}