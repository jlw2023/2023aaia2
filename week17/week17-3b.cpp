///��k�@:�w�w�ƧǪk
void sortColors(int* nums, int numsSize) {
    for(int i=0; i<numsSize; i++){
        for(int j=i+1; j<numsSize; j++){//����i
            if(nums[i] > nums[j]){///�k��j
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }
}
