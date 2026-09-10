// Q18: Write a program that accepts a percentage (0-100) and assigns a grade.

#include <stdio.h>

int main()
{
    float percentage;

    printf("Enter percentage: ");
    scanf("%f", &percentage);

    if(percentage >= 90 && percentage <= 100)
        printf("Grade A\n");
    else if(percentage >= 80)
        printf("Grade B\n");
    else if(percentage >= 70)
        printf("Grade C\n");
    else if(percentage >= 60)
        printf("Grade D\n");
    else if(percentage >= 0)
        printf("Grade F\n");
    else
        printf("Invalid percentage\n");

    return 0;
}
