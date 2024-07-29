#include <stdio.h>

int main(){
    int n, a, b, cnt = 10001;
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        scanf("%d %d", &a, &b);

        if (a <= b && b < cnt) 
            cnt = b;
    }
    // cnt의 값이 b로 바뀌지 않고 그대로이면 -1을 출력하고, 그렇지 않으면 d를 출력한다
    printf("%d", (cnt == 10001) ? -1 : cnt);

    return 0;
}