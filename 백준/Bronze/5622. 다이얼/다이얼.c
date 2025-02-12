#include <stdio.h>
#include <string.h>

int main(){
    int num[15], cnt = 0;
    char word[15];

    scanf("%s", word);
    int len = strlen(word);

    for(int i = 0; i < len; i++)
    {
        if(word[i] == 'A' || word[i] == 'B' || word[i] == 'C')
            num[i] = 2;
        else if(word[i] == 'D' || word[i] == 'E' || word[i] == 'F')
            num[i] = 3;
        else if(word[i] == 'G' || word[i] == 'H' || word[i] == 'I')
            num[i] = 4;
        else if(word[i] == 'J' || word[i] == 'K' || word[i] == 'L')
            num[i] = 5;
        else if(word[i] == 'M' || word[i] == 'N' || word[i] == 'O')
            num[i] = 6;
        else if(word[i] == 'P' || word[i] == 'Q' || word[i] == 'R' || word[i] == 'S')
            num[i] = 7;
        else if(word[i] == 'T' || word[i] == 'U' || word[i] == 'V')
            num[i] = 8;
        else if(word[i] == 'W' || word[i] == 'X' || word[i] == 'Y' || word[i] == 'Z')
            num[i] = 9;        
    }

    for(int i = 0; i < len; i++)
    {
        cnt += (num[i] + 1);
    }

    printf("%d\n", cnt);


    return 0;
}