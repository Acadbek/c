#include <stdio.h>

// \ %
int main () {
    int a, b;
    scanf("%d %d", &a, &b);

    if(a > b) {
        int t = a;
        a = b;
        b = t;
    }

    while (a <= b) {
        printf("%d\n", a);
        a++;
    }
}