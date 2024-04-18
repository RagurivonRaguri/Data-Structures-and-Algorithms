/*
Question Four (4) - Single Number
Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
    */

#include <stdio.h>
#include <stdbool.h>

int main() {
    int nums[] = {1, 1, 2, 2, 3};
    int size_of_nums = sizeof(nums) / sizeof(nums[0]);
    bool foundDuplicate = false;
    int k = -1;

    for (int i = 0; i < size_of_nums - 1; i++) {
        for (int j = i + 1; j < size_of_nums; j++) {
            if (nums[i] == nums[j]) {
                foundDuplicate = true;
                k = nums[i]; // Store the duplicate value
                break; // Exit the inner loop once a duplicate is found
            }
        }
        if (foundDuplicate) {
            break; // Exit the outer loop once a duplicate is found
        }
    }

    if (foundDuplicate) {
        printf("The duplicate is %d!\n", k);
    } else {
        printf("No duplicate found!\n");
    }

    return 0;
}

