#include <stdio.h>
int main() {
    int side;
    printf("Enter side: ");
    scanf("%d", &side);
    printf("Area = %d\n", side * side);
    printf("Perimeter = %d\n", 4 * side);
    return 0;
}
