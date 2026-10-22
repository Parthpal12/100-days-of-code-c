#include <stdio.h>

int main() {
    int arr[100];
    int n, i;
    int total = 0;
    int left = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        total += arr[i];
    }

    for (i = 0; i < n; i++) {

        int right = total - left - arr[i];

        if (left == right) {
            printf("%d", i);
            return 0;
        }

        left += arr[i];
    }

    printf("-1");

    return 0;
}
