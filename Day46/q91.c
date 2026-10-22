#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {

        char ch = str[i];

        if (!(ch == 'a' || ch == 'e' || ch == 'i' ||
              ch == 'o' || ch == 'u' ||
              ch == 'A' || ch == 'E' || ch == 'I' ||
              ch == 'O' || ch == 'U')) {

            printf("%c", ch);
        }

        i++;
    }

    return 0;
}
