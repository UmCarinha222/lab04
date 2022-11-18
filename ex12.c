#include "stdio.h"

int main(void) {
  int numero;
  int soma;
  printf("Informe um numero inteiro");
  scanf("%d",&numero);
  printf("O numero informado foi %d\n",numero);

  soma = 1;
  for (int i=2 ; i <= (numero/2.0+1) ; i++ ) {
    if ( numero % i == 0 ) {
      printf("%d - ",i);
      soma += i;
    }
  }
  printf("A soma dos divisores de %d (exceto ele mesmo) eh %d\n",numero,soma);
  return 0;
}
