#include <stdio.h>

int main(){
    char word[3];

    scanf("%s", word);

    if(word[0] == 'M')
        printf("MatKor");
    else if(word[0] == 'W')
        printf("WiCys");
    else if(word[0] == 'C')
        printf("CyKor");
    else if(word[0] == 'A')
        printf("AlKor");
    else if(word[0] == '$')
        printf("$clear");

    return 0;
}