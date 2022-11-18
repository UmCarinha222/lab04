#include <stdio.h>

int main(void)
{
int i,n;

for (i=0;i<=1000;i++)
{
    if(i%3==0)
    {
    printf("\n %i numero multiplo de 3", i);
    }
    if(i%5==0)
    {
    printf("\n %i numero multiplo de 5", i);
    }

}
return 0;
}
