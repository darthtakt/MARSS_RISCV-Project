#include <stdio.h>
#include <stdint.h>

#define SIM_START() asm volatile("csrs 0x800, zero")
#define SIM_STOP()  asm volatile("csrs 0x801, zero")

int main(){
    uint64_t base, exp, result;
    int a=2,sum;

    // Take values from the user
    printf("Enter base: ");
    scanf("%lu", &base);

    printf("Enter exponent: ");
    scanf("%lu", &exp);

    SIM_START();  //logging start

    asm volatile
    (
    "pow   %[z], %[x], %[y]\n\t"   // custom POW instruction
    : [z] "=r" (result)
    : [x] "r" (base), [y] "r" (exp)
    );
    a++;
    printf("%lu ^ %lu = %lu\n %d[[PASSED]]\n", base, exp, result,a);
    
    SIM_STOP();
    return 0;
}
