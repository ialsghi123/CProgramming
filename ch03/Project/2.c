#include <stdio.h>

int main(void)
{
    int number,y,d,m;
    float price;

    printf("Enter item number: ");
    scanf("%d",&number);

    printf("Enter unit price: ");
    scanf("%f",&price);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d",&m,&d,&y);

    printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n");
    printf("%d\t\t$%6.2f\t\t%.2d/%.2d/%d",number,price,m,d,y);

    return 0;

}