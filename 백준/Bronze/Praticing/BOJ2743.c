// 입력받은 단어의 길이를 출력하는 문제

#include <stdio.h>
#include <string.h>

int main(){
    char word[101];

    scanf("%s", word);

    printf("%lu", strlen(word));

    return 0;
}