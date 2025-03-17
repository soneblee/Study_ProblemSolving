#include <stdio.h>

int main(){
    int n, num, count = 0;
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {   
        int cnt = 0;
        scanf("%d", &num);
        for(int j = 1; j <= num; j++)
        {
            if(num % j == 0)
                cnt++;
        }
        if(cnt == 2)
            count++;
    }
    printf("%d\n", count);

    return 0;
}