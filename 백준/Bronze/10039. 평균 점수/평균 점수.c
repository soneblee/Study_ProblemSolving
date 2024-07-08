#include <stdio.h>

int main(){

    int score;
    int avg = 0;

    for(int i=0; i<5; i++){
        scanf("%d", &score);
        
        if(score < 40){
            score = 40;
        }
        
        avg += score;

    }

    printf("%d", avg/5);

    return 0;
}