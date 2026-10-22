#include <stdio.h>

int main() {
    int n, target;
    int arr[100];
    int i;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &target);

    int low = 0, high = n - 1;
    int first = -1, last = -1;

    while (low <= high) {

        int mid = (low + high) / 2;

        if (arr[mid] == target) {
            first = mid;
            high = mid - 1;
        }

        else if (arr[mid] < target)
            low = mid + 1;

        else
            high = mid - 1;
    }

    low = 0;
    high = n - 1;

    while (low <= high) {

        int mid = (low + high) / 2;

        if (arr[mid] == target) {
            last = mid;
            low = mid + 1;
        }

        else if (arr[mid] < target)
            low = mid + 1;

        else
            high = mid - 1;
    }

    printf("%d,%d", first, last);

    return 0;
}
