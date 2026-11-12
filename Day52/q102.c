#include <stdio.h>

int main() {
    int n, x;
    int arr[100];
    int i;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &x);

    int low = 0;
    int high = n - 1;
    int answer = -1;

    while (low <= high) {

        int mid = (low + high) / 2;

        if (arr[mid] >= x) {
            answer = mid;
            high = mid - 1;
        }

        else {
            low = mid + 1;
        }
    }

    printf("%d", answer);

    return 0;
}
