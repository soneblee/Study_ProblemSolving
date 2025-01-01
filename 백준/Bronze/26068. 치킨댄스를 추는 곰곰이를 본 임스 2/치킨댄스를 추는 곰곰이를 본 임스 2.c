#include <stdio.h>
#include <string.h>

int main(){
    int n, d[1000], cnt = 0;
    char d_day[1000];

    scanf("%d", &n);
    
    for(int i = 0; i < n; i++)
    {
        scanf("%s", d_day);

        if(sscanf(d_day, "D-%d", &d[i]) == 1)
        {
            if(d[i] < 91)
            {
                cnt++;
            } 
        }   
    }

    printf("%d\n", cnt);

    return 0;
}