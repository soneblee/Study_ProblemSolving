// 세 수가 서로 나눈 나머지가 같으려면 세 수가 같아야 함 -> a b c 중 최소값을 출력하면 된다 
#include <stdio.h>

int main(){
    int t, a, b, c, min;
    scanf("%d", &t);

    for(int i=0; i<t; i++)
    {
        scanf("%d %d %d", &a, &b, &c);

        min = a;
        if(b < min)
            min = b;
        if(c < min)
            min = c;
        
        printf("%d\n", min);
    }

    return 0;
}