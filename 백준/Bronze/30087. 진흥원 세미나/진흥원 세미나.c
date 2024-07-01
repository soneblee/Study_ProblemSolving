#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char seminar[30];

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%s", seminar);

        if(strcmp(seminar, "Algorithm") == 0)
            printf("204\n");
        else if(strcmp(seminar, "DataAnalysis") == 0)
            printf("207\n");
        else if(strcmp(seminar, "ArtificialIntelligence") == 0)
            printf("302\n");
        else if(strcmp(seminar, "CyberSecurity") == 0)
            printf("B101\n");
        else if(strcmp(seminar, "Network") == 0)
            printf("303\n");
        else if(strcmp(seminar, "Startup") == 0)
            printf("501\n");
        else if(strcmp(seminar, "TestStrategy") == 0)
            printf("105\n");
    }

    return 0;
}
