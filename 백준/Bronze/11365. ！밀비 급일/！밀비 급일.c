#include <stdio.h>
#include <string.h>

int main(){
    while(1){
        char pwd[502];
        fgets(pwd, sizeof(pwd), stdin);
        // fgets는 마지막의 개행문자(enter)까지 입력을 받기때문에 NULL로 바꿔줘야한다.
        pwd[strlen(pwd) - 1] = '\0';
        
        if (strcmp(pwd, "END") == 0)
            break;

        for(int i=strlen(pwd)-1; i>=0; i--){
            printf("%c", pwd[i]);
        }
        printf("\n");
    }

    return 0;
}