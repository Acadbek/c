#include <stdio.h>

int main () {
//    printf("hello");

    int a;
    scanf("son %d ", &a);

    int counter = 0;
    int i = 2;

    while (i < a) {
        if(a % i == 0) {
            counter++;
        }
        i++;
    }

    if(counter != 0) {
        printf("False");
    }else printf("True");
}