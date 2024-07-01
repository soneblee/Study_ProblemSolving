#include <stdio.h>
#include <string.h>

int main(){

    int n;
    char pin[21];

    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        scanf("%s", pin);

        if(strlen(pin) < 10 && strlen(pin) > 5)
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}