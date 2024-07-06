#include <stdio.h>

int main(){
    int score, num = 0;

    for(int i=0; i<5; i++){
        scanf("%d", &score);
         num += score;
    }

    printf("%d", num);
    
    return 0;
}