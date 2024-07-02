#include <stdio.h>

int main(){
    char word[2];

    scanf("%c", word);

    if(word[0] == 'N' || word[0] == 'n')
        printf("Naver D2");
    else
        printf("Naver Whale");
    return 0;
}