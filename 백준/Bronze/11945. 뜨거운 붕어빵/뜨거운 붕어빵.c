#include <stdio.h>

int main(){
    int n, m; 

    scanf("%d %d", &n, &m);

    char num[15];

    for(int i=0; i<n; i++){

        scanf("%s", num);
        
        for(int j=m-1; j>=0; j--){
            printf("%c", num[j]);
        }
        printf("\n");
    }
    
    return 0;
}