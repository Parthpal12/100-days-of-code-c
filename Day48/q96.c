#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i, start = 0, end, j;

    fgets(str, sizeof(str), stdin);

    int len = strlen(str);

    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    for (i = 0; i <= len; i++) {

        if (str[i] == ' ' || str[i] == '\0') {

            end = i - 1;

            for (j = end; j >= start; j--)
                printf("%c", str[j]);

            if (str[i] == ' ')
                printf(" ");

            start = i + 1;
        }
    }

    return 0;
}
