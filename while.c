#include <stdio.h>

int main() {
	int f = 1, a, b = 1;
	scanf("%d", &a);

	do {
		f *= b++;
	} while (b <= a);

	printf("%d\n", f);
}
