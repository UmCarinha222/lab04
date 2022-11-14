#include<stdio.h>
#include<stdlib.h>

int main ()
{
int i,multiplo;
multiplo = 0;
i=1;
while (i>0)
{
    if (i%3==0)
    {
        printf ("\nO numero %d e multiplo de 3.",i);

        multiplo++;
    }
    if (multiplo==5)
    {
        break;
    }
i++;
}
}
