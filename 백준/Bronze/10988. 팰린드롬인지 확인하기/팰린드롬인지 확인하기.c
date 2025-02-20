#include <stdio.h>
#include <string.h>

int main(){
    int cnt = 0;
    char word[100];
    scanf("%s", word);

    int len = strlen(word);

    for(int i = 0; i < len / 2; i++)
    {
        if(word[i] != word[len - 1 - i])
            cnt++;
    }

    if(cnt == 0)
        printf("1\n");
    else
        printf("0\n");
        
    return 0;
}