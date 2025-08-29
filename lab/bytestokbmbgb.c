#include <stdio.h>
int main() {
    long bytes;
    printf("Enter bytes: ");
    scanf("%ld", &bytes);
    printf("KB = %ld\n", bytes / 1024);
    printf("MB = %ld\n", bytes / (1024 * 1024));
    printf("GB = %ld\n", bytes / (1024 * 1024 * 1024));
    return 0;
}
