#include <stdio.h>
#include <string.h>

#define MAX_STR_LEN 100

int main(void)
{
    const char* check[7] = { // check 배열의 내용을 수정하지 않겠다는 의미 <- const 키워드(변수를 상수로 만듦)
        "Never gonna give you up",
        "Never gonna let you down",
        "Never gonna run around and desert you",
        "Never gonna make you cry",
        "Never gonna say goodbye",
        "Never gonna tell a lie and hurt you",
        "Never gonna stop"
    };
    
    int t, i;
    char s[MAX_STR_LEN]; // 입력된 문자열을 저장할 배열

    scanf("%d", &t);
    getchar(); // 개행 문자 제거
    while (t--)
    {
        fgets(s, MAX_STR_LEN, stdin); // 문자 입력받음
        s[strcspn(s, "\n")] = 0; // 개행 문자 제거(\n이 처음 나오는 위치를 찾아 그 위치에 null문자를 넣어 개행문자를 제거함)
        for (i = 0; i < 7; i++)
            if (strcmp(s, check[i]) == 0) // 두 문자열이 같은지 비교하여 같으면 0을 반환
                break;
        if (i == 7)
        {
            printf("Yes");
            return 0;
        }
    }
    printf("No");
    return 0;
}
