#include <stdio.h>
#include "HelloLib.h"

int main() {
   printf("hello travis!\n");
   int a = 1;
   int b = 2;
   int c = add(a,b);
   printf("%i + %i = %i\n",a, b, c);
   return 0;
}
