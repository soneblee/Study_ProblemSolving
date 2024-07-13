#include <stdio.h>
#include <string.h>

int main(){
    int arr[26] = {0}; // 알파벳(a~z) 배열
    char s[101];

    scanf("%s", s);

    int len = strlen(s);

    for(int i=0; i<strlen(s); i++){
        arr[s[i] - 'a']++;
    }
    // 알파벳 소문자에서 - 'a'를 하면 0부터 25사이의 값이 나온다
    // b - a = 1 (아스키코드 값 차이)
    for(int j=0; j<26; j++){
        printf("%d ", arr[j]);
    }
    
    return 0;
}