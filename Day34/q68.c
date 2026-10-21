#include <stdio.h>

int main() {
    int n, i, value, position = -1;

    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &value);

    for (i = 0; i < n; i++) {
        if (arr[i] == value) {
            position = i;
            break;
        }
    }

    if (position == -1) {
        printf("-1");
        return 0;
    }

    for (i = position; i < n - 1; i++)
        arr[i] = arr[i + 1];

    n--;

    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
