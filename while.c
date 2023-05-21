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


//        int a, b;
//        printf("a = ");
//        scanf("%d", &a);
//        printf("b = ");
//        scanf("%d", &b);
//
//        int count = 0;
//        while (a >= b) {
//            a -= b;
//            count++;
//        }

//        printf("a uzunlikdagi kesmaga b kesmadan %d ta joshlashtirish mumkin.\n", count);

    int n, k;
    printf("n = ");
    scanf("%d", &n);
    printf("k = ");
    scanf("%d", &k);

    int qoldiq = n;
    int butun_qism = 0;

    while (qoldiq >= k) {
        qoldiq -= k;
        butun_qism++;
    }

    printf("n sonining k ga bo'linishidagi qoldiq: %d\n", qoldiq);
    printf("n sonining k ga bo'linishidagi butun qismi: %d\n", butun_qism);

    return 0;

}