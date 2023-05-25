#include <stdio.h>

void print(int *a) {
	*a = (*a) * (*a);
	// printf("%d\n", a);
}

int main () {
	int a = 5;
	char b = 'a';
	float f = 2.0;

//	print(&a);

	printf("%d %p\n", a, &a);
	printf("%c %p = ", b, &b);
	printf("%f %p", f, &f);
	return 0;
}
