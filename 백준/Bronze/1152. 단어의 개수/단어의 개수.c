#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    int cnt = 0, len;
    char word[1000000];

    scanf("%[^\n]s", word);
    len = strlen(word);

    if(len == 1) // 1. 공백 한 칸을 입력 받았을 때
    {
        if(isblank(word[0]) != 0)
            cnt = -1;
        else
           cnt = 0;
    }
    else if(len == 0)
    {
        cnt = -1;
    }
    else{
    for(int i = 1; i < len - 1; i++) // 2. 양 끝이 공백일 경우를 제외
    {
        if(isblank(word[i]) != 0)
            cnt++;
    }
    }

    printf("%d\n", cnt + 1);

    return 0;
}