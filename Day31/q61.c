#include <stdio.h>

int main() {
    int n, i, target, index = -1;

    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &target);

    for (i = 0; i < n; i++) {
        if (arr[i] == target) {
            index = i;
            break;
        }
    }

    if (index == -1)
        printf("-1");
    else
        printf("Found at index %d", index);

    return 0;
}
