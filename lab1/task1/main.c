#include <stdio.h>
#include <stdlib.h>


int summation(int array[], int array_size);
int maximum(int array[], int array_size);

int main() {
    int *arr;
    int size, i;
    int a, b;

    // Get the size of the array from the user
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    //Allocate memory for the array
    arr = (int *)malloc(size * sizeof(int));
   
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    a = summation(arr, size);
    b = maximum(arr, size);

    printf("The sum of the elements in the array is: %d\n", a);
    printf("The largest element in the array is: %d\n", b);

    // Free the allocated memory
    free(arr);
    
    return 0;
}

// Function definition
int summation(int array[], int array_size) {
    int k;
    int sum = 0;

    for (k = 0; k < array_size; k++) {
        sum += array[k];
    }

    return sum;  
}

int maximum(int array[], int array_size){
    int i;
    int largest = array[0];
    for (i = 0; i < array_size; i++)
    {
        if (array[i] > largest)
        {
            largest = array[i];
        }
    }
        return largest;
}
