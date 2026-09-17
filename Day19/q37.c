#include <stdio.h>

int main()
{
    int a, b, lcm, max;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a > b)
        max = a;
    else
        max = b;

    lcm = max;

    while (lcm % a != 0 || lcm % b != 0)
    {
        lcm = lcm + max;
    }

    printf("LCM = %d", lcm);

    return 0;
}
