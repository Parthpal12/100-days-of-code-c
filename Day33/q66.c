#include <stdio.h>

int main() {
    int n, i, value;

    scanf("%d", &n);

    int arr[n + 1];

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &value);

    i = n - 1;

    while (i >= 0 && arr[i] > value) {
        arr[i + 1] = arr[i];
        i--;
    }

    arr[i + 1] = value;
    n++;

    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
