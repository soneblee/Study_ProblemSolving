/*
문자열을 입력하면 문자열의 첫 글자와 마지막 글자를 출력하는 프로그램
처음에 테스트 케이스의 개수를 입력(1~10)
*/

#include <stdio.h>
#include <string.h>

int main(){

    char word[1000];

    int test_case;

    scanf("%d", &test_case);

    for (int i=0; i<test_case; i++){
        scanf("%s", word);

        char start = word[0];
        char end = word[strlen(word) - 1];
        printf("%c%c\n",start, end);
    }

    return 0;
}