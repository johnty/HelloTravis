#include <stdio.h>

int main() {
   printf("hello travis!\n");
   int a = 1;
   int b = 2;
   int c = sum(a,b);
   printf("%i + %i = %i\n",a, b, c);
   return 0;
}
