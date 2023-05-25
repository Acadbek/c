#include <stdio.h>

int main () {
	int ar[20];
	int a;
	float b;
	double c;

	printf("%ld\n", sizeof(a));
	printf("%ld\n", sizeof(b));
	printf("%ld\n", sizeof(c));
	printf("%ld\n", sizeof(ar) / sizeof(int));

	return 0;
}
