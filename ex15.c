#include <stdio.h>

#include <math.h>

int main()

{

   float num, quad, cubo, raiz, cond=1;

   while(cond>=0){

       printf("\nDigite o número: "); scanf("%f", &num);

       quad = num*num;

       cubo = num*num*num;

       raiz = sqrt(num);

       if(num>=0){

           printf("\nquadrado: %.2f", quad);

           printf("\ncubo: %.2f", cubo);

           printf("\nraiz: %.2f\n", raiz);

       }

       else cond= -1;

   }

   printf("Saiu!");

   return 0;

}
