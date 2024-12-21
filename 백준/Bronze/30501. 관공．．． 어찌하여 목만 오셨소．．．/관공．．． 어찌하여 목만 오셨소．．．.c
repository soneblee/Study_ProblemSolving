#include <stdio.h>
#include <string.h>

int main(){
    int n;
    char name[1000][100];
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        scanf("%s", name[i]);
    }

    for(int j=0; j<n; j++)
    {
        if(strchr(name[j], 'S') != NULL)
            printf("%s\n", name[j]);
    }

    return 0; 
}