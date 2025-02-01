#include <stdio.h>
#include <string.h>

int main(){
    int t, r[1000], len[1000];
    char word[1000][20];

    scanf("%d", &t);

    for(int i = 0; i < t; i++)
    {
        scanf("%d %s", &r[i], word[i]);
        len[i] = strlen(word[i]);
    }

    for(int i = 0; i < t; i++)
    {
        for(int j = 0; j < len[i]; j++)
        {
            for(int k = 0; k < r[i]; k++)
            {
                printf("%c", word[i][j]);
            }  
        }
        printf("\n");
    }

    return 0;
}