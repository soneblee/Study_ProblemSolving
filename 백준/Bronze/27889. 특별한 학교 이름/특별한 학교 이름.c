/*
NLCS: North London Collegiate School
BHA: Branksome Hall Asia
KIS: Korea International School
SJA: St. Johnsbury Academy
*/

#include <stdio.h>

int main(){

    char word[100];

    scanf("%s", word);

    if(word[0] == 'N')
        printf("North London Collegiate School");
    else if(word[0] == 'B')
        printf("Branksome Hall Asia");
    else if(word[0] == 'K')
        printf("Korea International School");
    else if(word[0] == 'S')
        printf("St. Johnsbury Academy");

    return 0;
}