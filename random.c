#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void fill(int array[]) {
	srand(time(NULL));
	for(int i = 0; i < 10; i++) {
		array[i] = rand() % 100;
	}
}

void minmax(int array[]) {
	int max, min;
	for(int i = 0; i < 10; i++) {
		if(max < array[i]) max = array[i];
		else if(min > array[i]) min = array[i];
	}
	printf("max: %d min: %d", max, min);
}

void print(int array[]) {
	int c;
	for(int i = 0; i < 10; i++) {
		c = array[size - 1];
		printf("%d ", array[i]);
		printf("size: %d", c);
	}
}

int main () {
	int array[10];

	fill(array);
	print(array);
	minmax(array);

	return 0;
}
