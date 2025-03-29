#include <stdio.h>
#include <stdlib.h>

int stack[1000000];

int main(void) {
    int n, cmd, data;
    scanf("%d", &n);

    int top = -1;
    for (int i = 0; i < n; i++) {
        scanf("%d", &cmd);

        switch (cmd) {
            case 1:
                scanf("%d", &data);
                stack[++top] = data;
                break;

            case 2:
                if (top < 0)
                    printf("-1\n");
                else 
                    printf("%d\n", stack[top--]);
                break;

            case 3:
                printf("%d\n", top + 1);
                break;

            case 4:
                if (top == -1)
                    printf("1\n");
                else
                    printf("0\n");
                break;

            case 5:
                if (top == -1) 
                    printf("-1\n");
                else
                    printf("%d\n", stack[top]);
                break;
  
            default:
                break;
        }
    }

    return 0;
}