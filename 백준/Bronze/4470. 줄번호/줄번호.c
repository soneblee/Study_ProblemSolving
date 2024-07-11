#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    getchar(); // 줄바꿈 문자 제거 -> 여기까지 arr로 입력받는 것을 방지

    for(int i=0; i<n; i++){
        char arr[52];
        fgets(arr, sizeof(arr), stdin);
        printf("%d. %s", i+1, arr);
    }
    return 0;
}