#include <stdio.h>

int main() {
	int a = 0;

	while (a < 10) {
		int c = 1;
		while (c > 10) {;
			printf("  ");
		c++;
		}
		int b = 0;
		while (b < a) {
			a++;
			printf(" b");
		}
		b++;
		printf("\n a");
	}

	return 0;
}
