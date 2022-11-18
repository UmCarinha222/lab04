#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand((unsigned)time(NULL));

    int min = 1;
    int max;


    do{
        printf("\nQuantas faces deseja que o dado virtual possua?");
        scanf("%d%*c", &max);

        printf("A face sorteada foi: %d\n\n", (rand () % (max-min+1) + min) ); // gera numeros entre min e max


        printf("Pulse uma tecla.");
        getchar();
    } while( 1 );

    return 0;
}
