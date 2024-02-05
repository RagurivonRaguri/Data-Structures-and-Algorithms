/*
It's good to include here a comment containing the question you are solving and a description of your proposed solution
    */

/*
The solution in this file will run in O(n^2) Can we reduce this quadratic time to linear time O(n) ? 
*/

#include <stdio.h>

int main() {
    int nums[10] = {2, 3, 4, 2, 7, 8, 4, 1, 9, 6}; 
    int i, j, k, size;

    size = sizeof(nums) / sizeof(nums[0]);
    printf("size of nums: %d\n", size);

    // Place this part of the code in a different function and make the call to that function from main
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
