#include <stdio.h>

int main() {
    char str[200];
    int i = 0;
    int spaces = 0, digits = 0, special = 0;

    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n') {

        if (str[i] == ' ')
            spaces++;

        else if (str[i] >= '0' && str[i] <= '9')
            digits++;

        else if (!((str[i] >= 'a' && str[i] <= 'z') ||
                   (str[i] >= 'A' && str[i] <= 'Z')))
            special++;

        i++;
    }

    printf("Spaces=%d, Digits=%d, Special=%d",
           spaces, digits, special);

    return 0;
}
