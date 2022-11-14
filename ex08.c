#include <stdio.h>

int main(){
    int i, num, maior, menor;
    maior = 0;
    menor = 0;
    for(i = 0; i < 10; i++){
        printf("Digite o %d numero: ", i+1);
        scanf("%d",&num);
        if(i == 0){
            maior = num;
            menor = num;
        }
		else if(num > maior){
				maior = num;
			 }
			else if(num < menor){
					menor = num;
				}
    }
    printf("\nMaior: %d", maior);
    printf("\nMenor: %d", menor);
    return 0;
}
