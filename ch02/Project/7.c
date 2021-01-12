#include <stdio.h>

int main(void)
{

    int dollarAmount;

    scanf("%d",&dollarAmount);
    printf("Enter a dollar amount: %d\n",dollarAmount);

    printf("$20 bills: %d\n",dollarAmount/20);
    dollarAmount-=(dollarAmount/20)*20;

    printf("$10 bills: %d\n",dollarAmount/10);
    dollarAmount-=(dollarAmount/10)*10;

    printf("$5 bills: %d\n",dollarAmount/5);
    dollarAmount-=(dollarAmount/5)*5;

    printf("$1 bills: %d",dollarAmount/1);
    dollarAmount-=(dollarAmount/1)*1;


    return 0;
}