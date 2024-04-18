/*
Question Three (3) - Contains Duplicate

Given an array of integers, find if the array contains any duplicates.
Your function should return true if any value appears at least twice in the array, and it should return false if every element is distinct.

    */

#include <stdio.h>
#include <stdbool.h>

#include <stdio.h>
#include <stdbool.h>

int main() {
    int arr[] = {29, 2, 4, 5, 29, 2, 11, 15, 60, 29}; 
    int size = sizeof(arr) / sizeof(arr[0]);
    bool foundDuplicate = false;
    bool noDuplicate = true;

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                foundDuplicate = true;
                break;
            }
        }
        if (foundDuplicate) {
            break; // If a duplicate is found, no need to continue checking
        }
    }

    if (foundDuplicate) {
        printf("Duplicate found!\n");
    } else {
        printf("No duplicate found!\n");
    }

    return 0;
}
