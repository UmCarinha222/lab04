#include <stdio.h>

int main(void) {
    int n;
    printf("Digite um valor: ");
    scanf("%d", &n);
    int i = 1;
    int count = 1;
    while (i <= n) {
        int j = 1;
        while (j <= i) {
            printf("%d ", count);
            count++;
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
