int searchInsert(int* nums, int numsSize, int target) {
    int i=0,j=numsSize-1;
    while(i<=j){
        int a= i + (j-i)/2;

        if(nums[a] == target)
        return a;
        else if(nums[a]<target)
        i= a+1;
        else
        j=a-1;
    }
    return i;
}