#include <stdio.h>
#include <string.h>

int main(){
    
    char sentence[257];

    while(1){
        int count = 0;
        fgets(sentence, sizeof(sentence), stdin); // scanf 는 공백있는 문자열을 읽어들이지 못함
        sentence[strcspn(sentence, "\n")] = '\0'; // \n 을 제거함
        if(sentence[0] == '#')
            break;
        
        for(int i=0; i<strlen(sentence); i++){
            if(sentence[i] == 'a' || sentence[i] == 'A' || sentence[i] == 'e' || sentence[i] == 'E' || sentence[i] == 'i' || sentence[i] == 'I' || sentence[i] == 'o' || sentence[i] == 'O' || sentence[i] == 'u' || sentence[i] == 'U')
            count ++;
        }

        printf("%d\n", count);

    }


    return 0;
}