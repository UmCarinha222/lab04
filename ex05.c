#include <stdio.h>

int main(){
    int num, i, soma;
    soma = 0;


    for(i = 0; i < 10; i++){
        printf("Digite o %d numero: ", i+1);
        scanf("%d",&num);

        soma+= num;
    }

    printf("\nSoma: %d", soma);
    return 0;
}
