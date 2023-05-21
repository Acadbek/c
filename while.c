#include <stdio.h>

// \ %
int main () {
//    int a, b;
//    scanf("%d %d", &a, &b);
//
//    if(a > b) {
//        int t = a;
//        a = b;
//        b = t;
//    }
//
//    while (a <= b) {
//        if(a == 4) break;
//        printf("%d\n", a);
//        a++;
//    }


        int a, b;
        printf("a = ");
        scanf("%d", &a);
        printf("b = ");
        scanf("%d", &b);

        int count = 0;
        while (a >= b) {
            a -= b;
            count++;
        }

        printf("a uzunlikdagi kesmaga b kesmadan %d ta joshlashtirish mumkin.\n", count);

}