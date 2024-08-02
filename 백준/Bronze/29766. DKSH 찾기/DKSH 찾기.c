#include <stdio.h>
#include <string.h>

int main(){
    char arr[1001];
    char dksh[5];
    int cnt = 0;
    scanf("%s", arr);

    for(int i=0; i<strlen(arr)-3; i++)
    {
        for(int j=0; j<4; j++)
        {
            dksh[j] = arr[i + j];
            if(strcmp(dksh, "DKSH") == 0)
                cnt++;
        }
    }

    printf("%d", cnt);

    return 0;
}