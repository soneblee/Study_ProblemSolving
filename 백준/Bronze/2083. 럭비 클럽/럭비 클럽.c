#include <stdio.h>

int main(){

    while(1){
        int age, weight;
        char name[12];

        scanf("%s %d %d", name, &age, &weight);
        
        if(age == 0 && weight == 0){
            break;
            }

        if(age > 17 || weight >79)
            printf("%s Senior \n", name);
        else
            printf("%s Junior \n", name);
    }
    return 0;
}