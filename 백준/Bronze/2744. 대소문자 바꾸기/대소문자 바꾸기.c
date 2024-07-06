#include <stdio.h>
#include <string.h>

// a = 97 z =122 사이면 소문자
// 대소문자는 32만큼 차이가 남(대문자 = 소문자 - 32)

int main(){

    char word[101];
    scanf("%s", word);

    int len_word = strlen(word);

    for (int i=0; i<len_word; i++){
        if(word[i] >= 'a' && word[i] <= 'z'){
                word[i] -= 32;
        } else
            word[i] += 32;
    }

    printf("%s", word);

    return 0;
}