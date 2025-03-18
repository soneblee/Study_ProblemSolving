#include <stdio.h>

int main(){
    int board[10][10];
    int max = -1, n, m;

    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9; j++)
        {
            scanf("%d", &board[i][j]);

            if(max < board[i][j])
            {
                max = board[i][j];
                n = i + 1;
                m = j + 1;
            }   
        }
    }

    printf("%d\n%d %d\n", max, n, m);

    return 0;
}