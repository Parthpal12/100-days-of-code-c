#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0};
    int i = 0;

    scanf("%s", str);

    while (str[i] != '\0') {

        int index = str[i] - 'a';

        if (freq[index] == 1) {
            printf("%c", str[i]);
            return 0;
        }

        freq[index]++;
        i++;
    }

    printf("-1");

    return 0;
}
