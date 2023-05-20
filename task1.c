#include <stdio.h>

int main() {
	int a, b;
	puts("2ta son kiriting");
	
	printf("a = ");
	scanf("%d", &a);
	printf("b = ");
   	scanf("%d", &b);
	if(a > b) {
		puts("a = %d katta ekan", a);
	} else {
		puts("b = %d katta ekan", b);
	};	


    	return 0;
}
