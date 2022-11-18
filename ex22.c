#include <stdio.h>

int main(void) {
    int i = 100;
    int max = 0;
    while (i < 1000) {
        int j = 100;
        while (j < 1000) {
            int product = i * j;
            int reverse = 0;
            int temp = product;
            while (temp > 0) {
                reverse = reverse * 10 + temp % 10;
                temp /= 10;
            }
            if (product == reverse && product > max) {
                max = product;
            }
            j++;
        }
        i++;
    }
    printf("%d\n", max);
    return 0;
}
