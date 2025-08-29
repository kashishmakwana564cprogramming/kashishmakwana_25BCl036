#include <stdio.h>
int main() {
    int base, h;
    printf("Enter base and height: ");
    scanf("%d %d", &base, &h);
    printf("Area = %.2f\n", 0.5 * base * h);
    return 0;
}
