#include <stdio.h>

int main(){
    int n, m;
    int matrix[100][100];
    int matrix2[100][100];
    
    scanf("%d %d", &n, &m);

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            printf("%d ", matrix[i][j] + matrix2[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}