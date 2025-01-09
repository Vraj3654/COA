#include <stdio.h>

void main()
{

    int num, bin, dec = 0, base = 1, r;
    printf (" Enter a binary number : ");
    scanf (" %d", &num);

    bin = num;

    while ( num > 0)
    {
        r = num % 10;
        dec = dec+ r * base;
        num = num / 10;
        base = base * 2;
    }
    printf (" \n The decimal number is %d \t", dec);

}
