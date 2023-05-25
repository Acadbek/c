#include <stdio.h>

int main () {
	int a, b;
	scanf("%d %d", &a, &b);

	for(a; a < b; a++) {
		printf("%d ", a);
	}

	return 0;
}
