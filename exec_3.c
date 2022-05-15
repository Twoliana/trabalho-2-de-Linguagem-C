#include <stdio.h>

int main(void) {
   int v=5, *p;
   p = &v;

   printf("Valor guardado: %p\n",p);
   printf("Valor apontado: %d\n",*p);

   v=6;
   puts("Novo valor de P");
   printf("Valor guardado: %p\n",p);
   printf("Novo p Valor apontado: %d\n",*p);

   return 0;
}