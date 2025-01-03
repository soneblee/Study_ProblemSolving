#include <stdio.h>
// 개수가 홀수 개인 양말의 숫자를 출력
int main(){
    int num = 0, s[5], cnt[10] = {0};

    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &s[i]);

        cnt[s[i]]++;
    }

    for(int j = 0; j < 10; j++)
    {
        if(cnt[j] % 2 == 1)
        num = j;
            
    }
    printf("%d", num);
    return 0;
}