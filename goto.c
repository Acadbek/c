#include <stdio.h>

//%
//\n

int main () {
    int a;
    label:
    scanf("%d", &a);

    if (a > 5){
        printf("tugadi");
    } else {
        goto label;
    }
    return 0;
}