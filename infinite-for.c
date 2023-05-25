#include <stdio.h>

int main() {
    int a;
    char belgi;
    scanf("%c %d", &belgi, &a);

   for(int i = 0; i < a; i++) {
     if(i % 2 == 0) {
       char lowercase = belgi - 32;
       printf("%c\n", lowercase);
     }else {
      printf("%c\n", belgi);  
     }
   }

    return 0;
}
