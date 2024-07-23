#include <stdio.h>

int main(){
    int n, u, l;
    scanf("%d %d %d", &n, &u, &l);
    
    if(n>999 && (u > 7999 || l > 259))
        printf("Very Good");
    else if(n>999)
        printf("Good");
    else
        printf("Bad");

    return 0;
}