#include <stdio.h>
#include <string.h>

int main(){
    int t, score[101];
    char arr[100];

    scanf("%d", &t);

    for(int i = 0; i < t; i++)
    {
        scanf("%d", &score[i]);
    }

    for(int j = 0; j < t; j++)
    {
        if(score[j] <= 25)
            strcpy(arr, "World Finals");
        else if(score[j] <= 1000)
            strcpy(arr, "Round 3");
        else if(score[j] <= 4500)
            strcpy(arr, "Round 2");
        else
            strcpy(arr, "Round 1");

        printf("Case #%d: %s\n", j + 1, arr);
    }

    return 0;
}