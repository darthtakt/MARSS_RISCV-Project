#include <stdio.h>
#define SIM_START() asm volatile("csrs 0x800, zero")
#define SIM_STOP()  asm volatile("csrs 0x801, zero")

long long power(int base, int exp) {
    long long result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

int main() {
	SIM_START();  
   int base, exponent;
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);

    long long result = power(base, exponent);
    printf("%d ^ %d = %lld\n", base, exponent, result);
	SIM_STOP();
    return 0;
}
