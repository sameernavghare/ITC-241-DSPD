#include <stdio.h>

int main() {
    int a, i;
    int even = 0, odd = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &a);

    int arr[a];

    printf("Enter %d elements:\n", a);
    for (i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < a; i++) {
        if (i % 2 == 0) {
            even += arr[i];
        } else {
            odd += arr[i];
        }
    }

    printf("Sum of even index elements: %d\n", even);
    printf("Sum of odd index elements: %d\n", odd);

    return 0;
}