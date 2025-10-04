#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int threeSum(vector<int> nums, int target)
{
    sort(nums.begin(), nums.end());
    int closest = nums[0] + nums[1] + nums[2];
    for (int i = 0; i < nums.size() - 2; i++)
    {
        int left = i + 1;
        int right = nums.size() - 1;
        while (left < right)
        {
            int sum = nums[i] + nums[left] + nums[right];
            if (abs(target - sum) < abs(closest - target))
            {
                closest = sum;
            }
            if (sum < target)
            {
                left++;
            }
            else if (sum > target)
            {
                right--;
            }
            else
            {
                return sum;
            }
        }
    }
    return closest;
}

int main()
{
    vector<int> nums = {-1, 2, 1, -4};
    int target = 1;
    cout << threeSum(nums, target);
}