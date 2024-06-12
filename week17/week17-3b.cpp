///方法一:泡泡排序法
void sortColors(int* nums, int numsSize) {
    for(int i=0; i<numsSize; i++){
        for(int j=i+1; j<numsSize; j++){//左手i
            if(nums[i] > nums[j]){///右手j
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }
}
