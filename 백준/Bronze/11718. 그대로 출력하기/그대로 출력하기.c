#include <stdio.h>

int main() {
    char str[101];

    while(scanf("%[^\n]", str) != EOF) {
        printf("%s\n", str);
        getchar();
        // \n이 나올 때까지 입력받고 \n을 제거
    }

    return 0;
}