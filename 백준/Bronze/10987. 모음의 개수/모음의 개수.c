#include <stdio.h>
#include <string.h>

int main(){
    int count = 0;
    char word[102];
    scanf("%s", word);

    for(int i=0; i<strlen(word); i++){
        if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u')
            count ++;
        }

        printf("%d\n", count);

    return 0;
}