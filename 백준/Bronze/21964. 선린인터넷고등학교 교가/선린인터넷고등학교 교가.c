#include <stdio.h>

int main(){
    int n;
    char s[100002];

    scanf("%d", &n);
    while (getchar() != '\n');
    fgets(s, sizeof(s), stdin);

    for(int i=n-5; i<n; i++)
    {
        printf("%c", s[i]);
    }
    

    return 0;
}