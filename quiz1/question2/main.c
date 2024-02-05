/*
It's good to include here a comment containing the question you are solving and a description of your proposed solution
    */
/*
    Not sure if this solution rotates
*/
#include <stdio.h>

int main() {
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int i, j, k;
    int size_of_arr = sizeof(arr) / sizeof(arr[0]);
    printf("%d\n", size_of_arr);

    for (i=0, j=9; i<j; i++, j--) {
        k = arr[i];
        arr[i] = arr[j];
        arr[j] = k;
    }

    printf("The rotated array:\n");
    for (i = 0; i < size_of_arr; i++) {
        printf("%d \n", arr[i]);
    }

    return 0;
}
