#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    int h, m, s;
    int d = 1000000;  // Delay in microseconds (1 second)

    printf("set time: \n");
    scanf("%d %d %d", &h, &m, &s);

    if (h > 24 || m > 60 || s > 60) {
        printf("Error");
        exit(0);
    }

    while (1) {
        s++;
        if (s > 59) {
            m++;
            s = 0;
        }
        if (m > 59) {
            h++;
            m = 0;
        }
        if (h >= 24) {
            h = 1;
        }

        printf("\n Soat :");
        printf("\n %02d : %02d : %02d", h, m, s);
        fflush(stdout);
        usleep(d);
        system("clear");
    }

    return 0;
}
