#include <stdio.h>

int main(){
    char index[100000] = {0};
    int n, b, num;
    int cnt = 0;

    scanf("%d %d", &n, &b);

    for(int i = n; i > 0; i /= b)
    {
        num = i % b;

        if(num < 10)
        {
            index[cnt++] = num + '0';
        }
        else
        {
            index[cnt++] = num + 'A' - 10;
        }
    }

    for(int i = cnt - 1; i >= 0; i--)
    {
        printf("%c", index[i]);
    }

    return 0;
}