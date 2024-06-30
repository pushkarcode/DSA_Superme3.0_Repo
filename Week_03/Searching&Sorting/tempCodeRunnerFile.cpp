    {
        int mid = (start + end) << 1;
        if (nums[mid] <= nums[start] && nums[mid] <= nums[end])
            end = mid;
        else if (nums[mid] >= nums[start] && nums[mid] >= nums[end])
            start = mid + 1;
        else
            return nums[mid];
        ans = start;
    }
    return nums[ans];
}

int findPeakElement(vector<int> &nums)
{
    int n = nums.size();