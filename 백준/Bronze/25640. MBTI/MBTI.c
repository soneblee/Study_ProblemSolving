#include <stdio.h>
#include <string.h>

int main(){
    char mbti[10], m[5];
    int n, count = 0;

    scanf("%s", m);
    scanf("%d", &n);
   

    for(int i=0; i<n; i++){
        scanf("%s", mbti);
        
        if (strcmp(mbti, m) == 0)
            count++;
    }
    printf("%d", count);

    return 0;
}