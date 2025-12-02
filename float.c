#include <stdio.h>
int main()
{
    float x;
    float y;
    
    printf("The value of x is = \n");
    scanf("%f", &x);

    printf("The value of y is = \n");
    scanf("%f", &y);

    float product = x * y;

    printf("The product is = %f", product);
    return 0;

}