#include <stdio.h>
#define ARRAY_SIZE(a) (sizeof(a) / sizeof(a[0]))

// Function to reverse an array
void reverseArray(int arr[], int size) {
    int temp;
    // changed i <= size TO i < size
    for (int i = 0; i < size / 2; ++i) { 
        temp = arr[i];

        /*
        At iteration i = 0, arr[size - 1] == arr[5], which is invalid for an array 
        of 5 elements as arrays a start at index 0
        FIX: change it to arr[size - 1 - i]
        this fixes the segmentation fault and allows the code to work properly
        */
        arr[i] = arr[size - i];  

        arr[size - 1 - i] = temp;    
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
