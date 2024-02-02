#include <stdio.h>
#include <stdbool.h>

int main(){
    int nums[5] = {1,1,2,2,3};
    int size_of_nums = sizeof(nums)/sizeof(nums[0]);
    bool foundDuplicate;
    int i, j, k;
    for (i = 0; i < size_of_nums; i++)
    {
        for (j = i+1; i < size_of_nums; j++)
        {
            if (nums[i] == nums[j])
            {
                foundDuplicate = true;
            }else{
                foundDuplicate = false;
                k = nums[i];
                break;
            }
            
        }
        
    }
    
    printf("The duplicate is, %d!", k);
}