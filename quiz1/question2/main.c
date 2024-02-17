/*
Question Two (2) - Rotate Array
Given an array, rotate the array to the right by k steps, where k is non-negative.
*/
#include <stdio.h>

void rotateArray(int arr[], int size) {
    int temporary_element = arr[size - 1]; // Stores the last element temporarily

    // Shift elements to the right by one position
    for (int i = size - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    arr[0] = temporary_element; // Move the last element to the first position
}

int main() {
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size_of_arr = sizeof(arr) / sizeof(arr[0]);

    printf("Original array:\n");
    for (int i = 0; i < size_of_arr; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    rotateArray(arr, size_of_arr);

    printf("The rotated array:\n");
    for (int i = 0; i < size_of_arr; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

