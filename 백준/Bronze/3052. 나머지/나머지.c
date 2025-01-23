#include <stdio.h>

int main(){
    int num[11], mod[11], count = 0;

    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);

        mod[i] = num[i] % 42;
    }

    for(int j = 0; j < 10; j++)
    {   
        int cnt = 0;

        for(int k = j + 1; k < 10; k++)
        {
            if(mod[j] == mod[k])
                cnt++;
        }
        if(cnt == 0)
            count++;
    }

    printf("%d\n", count);

    return 0;
}