#include <stdio.h>
#include <math.h> 
#define SIM_START() asm volatile("csrs 0x800, zero")
#define SIM_STOP()  asm volatile("csrs 0x801, zero")

int main() {
    SIM_START();

    double base, exponent, result;

    // Take values from user
    printf("Enter base: ");
    scanf("%lf", &base);

    printf("Enter exponent: ");
    scanf("%lf", &exponent);

    // Compute power
    result = pow(base, exponent);

    printf("%.2lf ^ %.2lf = %.2lf\n", base, exponent, result);

    SIM_STOP();
    return 0;
}
