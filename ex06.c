#include<stdio.h>

#include<locale.h>

int main()
{

int i, n, a = 0;

float media;

for(i = 0; i < 10; i ++)

{
 printf("INFORME O %d NUMERO: ", i + 1);
 scanf("%d", &n);
 a = a + n;
}
printf("Total: %d\n", a);
media = a / 10;
printf("Media: %.2f\n", media);

return 0;

}
