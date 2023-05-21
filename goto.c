#include <stdio.h>

//%
//\n

int main () {
    int a;

    goto label2;
    label:
    scanf("%d", &a);

    if (a > 5){
        printf("tugadi");
    } else {
        goto label;
    }
    label2:
    return 0;
}