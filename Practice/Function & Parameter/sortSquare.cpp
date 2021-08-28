void sortedSquares(int *nums, int size)
{
    // TODO
    for (int i = 0; i < size; i++)
        if (nums[i] < 0)
            nums[i] *= -1;

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (nums[j] < nums[i])
            {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        nums[i] *= nums[i];
    }
}