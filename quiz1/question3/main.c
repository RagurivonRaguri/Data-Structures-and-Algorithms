/*
It's good to include here a comment containing the question you are solving and a description of your proposed solution
    */

#include <stdio.h>
#include <stdbool.h>

/*
    Duplicates are not only consecutive numbers. Test this code with this array --> [29,2,4,5,29,2,11,15,60,29]
    */
int main(){
    int arr[10]= {0,0,1,2,5,2,3,3,4,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    int i, j;
    bool foundDuplicate ;
    bool noDuplicate ;
    for (i = 0; i < size; i++)
    {
        for (j = i+1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                foundDuplicate = true;
                break;
            }else
            {
                noDuplicate = false;
                break;
            }
                
        }
        
    }
    if (foundDuplicate){
        printf("Duplicate found!\n");
    }
    else if (noDuplicate)
    {
        printf("No duplicate found!\n");
    }

    return 0;
}
