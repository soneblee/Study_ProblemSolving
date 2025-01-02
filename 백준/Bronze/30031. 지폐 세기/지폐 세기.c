#include <stdio.h>

int main(){
    int n, row, col, num = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d %d", &row, &col);

        if(row == 136)
            num += 1000;

        else if(row == 142)
            num += 5000;

        else if(row == 148)
            num += 10000;
            
        else if(row == 154)
            num += 50000;
    }

    printf("%d", num);

    return 0;
}