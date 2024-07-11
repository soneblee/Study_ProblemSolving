#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    int n;
    char name[21];
    scanf("%d", &n);

    for (int i=0; i<n; i++){
        scanf("%s",name);
        for(int j=0; j<strlen(name); j++){
            name[j] = tolower(name[j]);
        }
        printf("%s\n", name);
    }

    return 0;
}