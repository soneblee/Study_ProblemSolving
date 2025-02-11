#include <stdio.h>

int main() {
	char a[4], b[4];

	scanf("%s %s", a, b);

	for (int i = 2; i >= 0; i--) {
		if (a[i] > b[i]) {
			printf("%c%c%c\n", a[2], a[1], a[0]);
			break;
		}

		else if (a[i] < b[i]) {
			printf("%c%c%c\n", b[2], b[1], b[0]);
			break;
		}
	}
	return 0;
}