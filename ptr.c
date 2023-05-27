#include <stdio.h>

void f(int *a) {
	printf("%ld\n", sizeof(*a));
}

int main () {
	int a[3000], b = 123;
	int *p = &a;

	printf("%ld\n", sizeof(a));
	f(&a);
	return 0;
}
