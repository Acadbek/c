#include <stdio.h>

void print(int *a) {
	*a = (*a) * (*a);
	// printf("%d\n", a);
}

int main () {
	int b = 7;
	int *p = &b;

	printf("%d %p", b, *p);
	return 0;
}
