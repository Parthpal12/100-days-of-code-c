#include <stdio.h>

int main()
{
    int n, original, temp, digit;
    int count = 0, sum = 0, power, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;
    temp = n;

    /* Count the number of digits */
    while (temp > 0)
    {
        count++;
        temp = temp / 10;
    }

    temp = n;

    /* Calculate sum of powers */
    while (temp > 0)
    {
        digit = temp % 10;

        power = 1;
        for (i = 1; i <= count; i++)
        {
            power = power * digit;
        }

        sum = sum + power;
        temp = temp / 10;
    }

    if (sum == original)
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");

    return 0;
}
