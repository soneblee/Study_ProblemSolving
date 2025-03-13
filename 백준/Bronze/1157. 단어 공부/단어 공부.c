#include <stdio.h>
#include <string.h>

int main(){
    char word[1000000];
    int spell[26] = {0}; // 알파벳 빈도수 저장

    scanf("%s", word);

    int len = strlen(word);
    int max = 0, cnt = 0;
    int index;

    for(int i = 0; i < len; i++)
    {
        if(word[i] > 96)
        {
            word[i] = word[i] - 32;
        }
        spell[word[i] - 65]++;
    }

    for(int i = 0; i < 26; i++)
    {
        if(spell[i] > max)
        {
            max = spell[i];
            index = i;
        }
    }

    for(int i = 0; i < 26; i++)
    {
        if(spell[i] == max)
            cnt++;
    }

    if(cnt > 1)
        printf("?\n");
    else
        printf("%c\n", index + 65);


    return 0;
}