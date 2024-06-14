#include <stdio.h>

char nums[] = {2, 7, 11, 15};
int target = 9;
int list_size = sizeof(nums)/sizeof(nums[0]);

int main(){
    for (int i = 0; i < list_size; i++){
        printf("%d\n", nums[i]);
    }

    return 0;
}
