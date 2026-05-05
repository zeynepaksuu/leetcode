int removeDuplicates(int* nums, int numsSize)
{
    int *tmp = malloc(numsSize * sizeof(int));
    int i = 0;
    int j = 0;
    for (int i = 0; i < numsSize; i++)
    {
        if (i == numsSize - 1 || nums[i] != nums[i + 1])
        {
            tmp[j] = nums[i];
            j++;
        }
    }
    for (int k = 0; k < j; k++)
    {
        nums[k] = tmp[k];
    }
    free(tmp);
    return j;
}