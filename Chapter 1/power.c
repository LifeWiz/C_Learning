#include <stdio.h>
main()
{
    int c;
    int b;
    printf("%s", "base : ");
    scanf("%d",&c);
    printf("%s","exponent : ");
    scanf("%d",&b);
    printf("%d\n", power(c,b));
    return(0);
}
int power(int base, int n)
{
    int p;
    
    for (p = 1; n> 0; --n)
        p = p * base;
    return p;
}