#include <stdio.h>
int main() {
    float salary;
    printf("Enter basic salary: ");
    scanf("%f", &salary);
    float net = salary + (0.10 * salary) - (0.03 * salary);
    printf("Net Salary = %.2f\n", net);
    return 0;
}
