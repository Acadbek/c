#include <stdio.h>
#include <string.h>

void reverse_string(char* str) {
	int length = strlen(str);
	int i, j;
	char temp;

	for(i = 0, j = length - 1; i < j; i++, j--) {
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}

}

int main () {
	char str[] = "Goodbye, World";
	printf("%s\n", str);

	reverse_string(str);
	printf("%s\n", str);
	return 0;
}
