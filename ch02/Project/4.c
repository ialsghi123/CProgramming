#include <stdio.h>

int main(void)
{
    float amount;

    scanf("%f", &amount);
    printf("Enter an amount: %.2f\n", amount);

    
    printf("With tax added: $%.2f", amount*0.05+amount);   




    return 0;
}