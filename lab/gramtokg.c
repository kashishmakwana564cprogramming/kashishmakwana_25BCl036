#include <stdio.h>
int main() {
    int grams;
    printf("Enter grams: ");
    scanf("%d", &grams);
    printf("Kg = %d\n", grams / 1000);
    return 0;
}
