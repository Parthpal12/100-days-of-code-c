#include <stdio.h>

int main() {
    int n, i, value, position;

    scanf("%d", &n);

    int arr[n + 1];

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d %d", &value, &position);

    if (position < 0 || position > n)
        return 0;

    for (i = n; i > position; i--)
        arr[i] = arr[i - 1];

    arr[position] = value;
    n++;

    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
