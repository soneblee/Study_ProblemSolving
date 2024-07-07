#include <stdio.h>

int main(){
    int n;
    char word[20] = "WelcomeToSMUPC";

    scanf("%d", &n);

    if(n%14 == 0)
        printf("%c", word[13]);
    else
        printf("%c", word[n%14-1]);

    return 0;
}
