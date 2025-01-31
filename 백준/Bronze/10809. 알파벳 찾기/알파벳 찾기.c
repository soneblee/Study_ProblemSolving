#include <stdio.h>
#include <string.h>

int main(){
    char word[100], result[21] = {0};
    char alpha[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    scanf("%s", word);
    int len = strlen(word);

    for(int i = 0; i < 26; i++)
    {
        for(int j = 0; j < len; j++)
        {
            if(alpha[i] == word[j])
            {
                result[i] = j;
                    break;
            }
            else
                result[i] = -1;

        }
        printf("%d ", result[i]);  
    }



    return 0;
}