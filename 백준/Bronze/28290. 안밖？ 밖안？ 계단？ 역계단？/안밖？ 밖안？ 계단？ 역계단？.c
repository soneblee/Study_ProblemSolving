#include <stdio.h>
#include <string.h>

int main(){

    char str[10];
    fgets (str, sizeof(str), stdin);

    // 개행문자제거
    if (str[strlen(str) - 1] == '\n')
    {
        str[strlen(str) - 1] = '\0';
    }

    if(strcmp(str, "fdsajkl;") == 0 || strcmp(str, "jkl;fdsa") == 0)
        printf("in-out\n");
    else if(strcmp(str, "asdf;lkj") == 0 || strcmp(str, ";lkjasdf") == 0)
        printf("out-in\n");
    else if(strcmp(str, "asdfjkl;") == 0)
        printf("stairs\n");
    else if(strcmp(str, ";lkjfdsa") == 0)
        printf("reverse\n");
    else
        printf("molu\n");
    return 0;
}