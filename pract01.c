#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int size = 10;

void fill (int a[]) {
	for (int i = 0; i < size; i++) a[i] = rand() % 100;
}

void print (int a[]) {
	for (int i = 0; i < size; i++) printf("%d ", a[i]);
	puts("");
}

void sort (int a[]) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < 10; j++) {
			if (a[i] < a[j]) {
				int t = a[i];
				a[i] = a[j];
				a[j] = t; 
			}
		}
	}
}

int main() {
	srand(time(0));
	int a[size];

	fill(a);
	print(a);
	sort(a);
	print(a);
}
