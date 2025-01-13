#include <stdio.h>
#include <string.h>

int main() {
	char s[100];
	fgets(s, sizeof(s), stdin);

	if (strlen(s) >= 4 && s[0] == '"' && s[strlen(s) - 2] == '"') {
		for (int i = 1; i < strlen(s) - 2; i++)
			printf("%c", s[i]);
	}
	else
		printf("CE");

	return 0;
}