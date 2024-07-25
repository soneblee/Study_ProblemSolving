#include <stdio.h>
#include <string.h>

int main(){
    char arr[100];
    int m = 0, o = 0, b = 0, i = 0, s = 0;

    scanf("%s", arr);

    for(int j=0; j<strlen(arr); j++)
    {
        if(arr[j] == 'M')
            m = 1;
        if(arr[j] == 'O')
            o = 1;
        if(arr[j] == 'B')
            b = 1;
        if(arr[j] == 'I')
            i = 1;
        if(arr[j] == 'S')
            s = 1;
    }

    if(m && o && b && i && s) 
        printf("YES");
    else
        printf("NO");


    return 0;
}