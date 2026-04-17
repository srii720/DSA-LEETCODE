int maxSubArray(int* nums, int numsSize) {
    int max_sum=nums[0];
    int current_sum=0;
    for(int i=0;i<numsSize;i++){
        current_sum+=nums[i];
        max_sum=fmax(max_sum,current_sum);
        if(current_sum<0){
            current_sum=0;
        }
    }return max_sum;
    
}