#include <stdio.h>
int main() {
    int minutes;
    printf("Enter minutes: ");
    scanf("%d", &minutes);
    printf("Hours = %d\n", minutes / 60);
    return 0;
}
