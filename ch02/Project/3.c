#include <stdio.h>

int main(void)
{
    float v;
    int r;

    scanf("%d",&r);

    v = (4.0f / 3.0f) * 3.14f * r * r * r;

    printf("%.2f",v);



    return 0;
}