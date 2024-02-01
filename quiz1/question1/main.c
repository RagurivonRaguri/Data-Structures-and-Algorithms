#include <stdio.h>

int main() {
    int nums[10] = {2, 3, 4, 2, 7, 8, 4, 1, 9, 6}; 
    int i, j, k, size;

    size = sizeof(nums) / sizeof(nums[0]);
    printf("size of nums: %d\n", size);

    for (i = 0; i < size; i++) {

        for (j = i + 1; j < size;) {

            if (nums[i] == nums[j]) {

                for (k = j; k < size - 1; k++) {

                    nums[k] = nums[k + 1];

                }

                size--;

            } else {

                j++;

            }
        }
    }

    printf("Array elements after deletion of duplicate elements: ");
    for (i = 0; i < size; i++) {
        printf("%d\t", nums[i]);
    }

    return 0;
}
