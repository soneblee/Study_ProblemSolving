#include <stdio.h>

int main(){
    int m[28], num[30], t, k;

    for(int i = 0; i < 30; i++)
    {
        num[i] = i + 1;
    }

    for(int i = 0; i < 28; i++)
    {
        scanf("%d", &m[i]);
    }
    
    for(int i = 0; i < 30; i++)
    {
        int cnt = 0;
        for(int j = 0; j < 28; j++)
        {
            if(num[i] == m[j])
                cnt++; 
        }
        if(cnt == 0)
            printf("%d\n", i + 1);
    }

    return 0;
}