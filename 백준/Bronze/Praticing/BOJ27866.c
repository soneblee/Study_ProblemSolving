/*

단어 S와 정수  i가 주어졌을 때, S의 i번째 글자를 출력하는 프로그램을 작성하시오.

입력
첫째 줄에 영어 소문자와 대문자로만 이루어진 단어  $S$가 주어진다.
단어의 길이는 최대 1000
둘째 줄에 정수 i가 주어진다. 
*/

#include <stdio.h>

int main(){
    char word[1000];
    int i;

    scanf("%s", word);
    scanf("%d", &i);

    printf("%c\n", word[i-1]);

    return 0;
}