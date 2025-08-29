#include <stdio.h>
int main() {
    float price;
    printf("Enter price: ");
    scanf("%f", &price);
    float net = price - (0.10 * price);
    printf("Net Sales = %.2f\n", net);
    return 0;
}
