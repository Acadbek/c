#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int row = 3;
const int col = 3;

void fill (int a[row][col]) {
	for(int i = 0; i < row * col; i++) {
		a[0][i] = rand() % 100;
	}
}

void print (int a[row][col]) {
	for(int i = 0; i < row; i++) {
		for(int j = 0; j < col; j++) {
			printf("%d ", a[i][j]);
		}
		puts("");
	}
}

int diag_sum1 (int a[row][col]) {
	int s = 0;
	for(int i = 0; i < row; i++) s += a[i][i];

	return s;
}

int diag_sum2 (int a[row][col]) {
	int s = 0;
	for(int i = 0, j = 2; i < col; i++, j--) {
		s += a[i][j];
	}
	return s;
}

int main () {
    	srand(time(NULL));
	int a[row][col];
	fill(a);
	print(a);
	printf("%d\n", diag_sum1(a));
	printf("%d\n", diag_sum2(a));
	//diag_sum2(a);
}
