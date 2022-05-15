#include <stdio.h>

/*Exec 5*/

int main(void) {
  
   int v, *p;
   p = &v;

   puts(v == *p ? "Sim":"não");

   return 0;
}