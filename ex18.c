#include<stdio.h>
#include<stdlib.h>

main(){
    int ano_ini, i, at;
    float perc=1.5, salario;

    printf("Em qual ano ele foi contratado? ");
    scanf("%d", &ano_ini);
    printf("Qual o ano atual?");
    scanf("%d", &at);
    printf("Qual o seu salário inicial? ");
    scanf("%f", &salario);

    for(i=ano_ini; i<=at; i++){
        if(i!=ano_ini){
            salario=salario+salario*perc/100;
            perc=perc*2;
        }
        printf("%d -- %.2f -- %.2f\n", i, perc, salario );
    }
    printf("O SALARIO DELE EH%.2f", salario);

    system("PAUSE");
}
