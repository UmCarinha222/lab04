#include <stdio.h>

int main(){
    int num, cont;
    cont = 1;
    printf("Entre com o valor de n: ");
    scanf("%d",&num);

    while(num != 0){

            if( cont %2 != 0){

                 printf("%d ", cont);
                 num--;
            }

        cont ++;
    }
    return 0;
}
