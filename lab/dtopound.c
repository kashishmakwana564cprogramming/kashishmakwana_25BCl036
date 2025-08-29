#include <stdio.h>
int main() {
    int dollars;
    printf("Enter dollars: ");
    scanf("%d", &dollars);
    int pounds = (dollars * 48) / 70;
    printf("Pounds = %d\n", pounds);
    return 0;
}
