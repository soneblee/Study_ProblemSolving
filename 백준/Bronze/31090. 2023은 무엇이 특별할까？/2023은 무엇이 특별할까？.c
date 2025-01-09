#include <stdio.h>

int main(){
    int t, n[8911];

    scanf("%d", &t);

    for(int i = 0; i < t; i++)
    {
        scanf("%d", &n[i]);

        if((n[i] + 1) % (n[i] % 100) == 0)
            printf("Good\n");
        else  
            printf("Bye\n");
    }

    return 0;
}