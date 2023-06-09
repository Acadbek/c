#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int size = 5;

void fill (int a[]) {
	for (int i = 0; i < size; i++) a[i] = rand() % 100;
}

void print (int a[]) {
	for (int i = 0; i < size; i++) printf("%d ", a[i]);
	puts("");
}

int sum_idx (int a[], int start) {
	int s = 0;
	for(int i = start; i < size; i += 2) s += a[i];

	return s; 
}

void sort (int a[]) {
	int s;
	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < 10; j++) {
			s++;
			if (a[i] < a[j]) {
				int t = a[i];
				a[i] = a[j];
				a[j] = t; 
			}
		}
	}
	printf("Qadamlar soni: %d\n", s);
}

int swap (int a[], int start, int stop) {
	int s;
	for(int i = start; i < stop; i++) s += a[i];
	return s;
}

int main() {
	srand(time(0));
	int a[size];

	fill(a);
	printf("birinchi yarm - %d\n", swap(a, 0, size / 2));
	printf("ikkinchi yarm - %d\n", swap(a, size / 2, size));
	print(a);
	printf("sum: %d\n", sum_idx(a, 1));
	//sort(a);
	//print(a);
}
