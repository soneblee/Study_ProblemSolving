#include <stdio.h>
#include <string.h>

int main(){
    int cnt = 0;
    char arr[32];

    scanf("%s", arr);

    for(int i=0; i<strlen(arr); i++){
        if(arr[i] == '_')
            cnt++;
    }
    
    int len = strlen(arr); 

    printf("%d", len + 2 + (cnt * 5));

    return 0;
}  