#include <stdio.h>
#define ARRAY_SIZE(a) (sizeof(a) / sizeof(a[0]))

// Function to reverse an array
void reverseArray(int arr[], int size) {
    int temp;
    for (int i = 0; i <= size / 2; ++i) { 
        temp = arr[i];
        arr[i] = arr[size - i];  
        arr[size - i] = temp;    
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};

    reverseArray(arr, ARRAY_SIZE(arr));

    printf("Reversed array: ");
    for (int i = 0; i < ARRAY_SIZE(arr); ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
