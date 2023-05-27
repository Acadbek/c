#include <stdio.h>

void fill (int *a) {
	for(int i = 0; i < 10; i++){
		scanf("%d ", a + i);
	}
}

void print(int *a) {
	for(int i = 0; i < 10; i++) {
		printf("%d\n", a[i]);
	}
}

int main() {
	int a[10];

	fill(a);
	print(a);
	return 0;
}
