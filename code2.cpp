//w.c.p 1+2+4+7+11......upto n terms . w.c.p to calcute the sum of given series 
#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    int current_term = 1;
    int i = 1;
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);
    while (i <= n) {
        sum += current_term;       
        current_term += i;         
        i++;                       
    } 
    printf("The sum of the series up to %d terms is: %d\n", n, sum);
    return 0;
}

