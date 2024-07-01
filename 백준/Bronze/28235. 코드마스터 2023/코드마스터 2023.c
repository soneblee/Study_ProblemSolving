/*

*/

#include <stdio.h>

int main(){

    char word[100];

    scanf("%s", word);

    if(word[0] == 'S')
        printf("HIGHSCHOOL");
    else if(word[0] == 'C')
        printf("MASTER");
    else if(word[0] == '2')
        printf("0611");
    else if(word[0] == 'A')
        printf("CONTEST");

    return 0;
}