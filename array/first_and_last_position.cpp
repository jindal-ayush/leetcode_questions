#include <iostream>
#include <vector>
using namespace std;
vector<int> searchRange(vector<int> &nums, int target)
{
    vector<int> res(2, -1);
    int left = 0;
    int right = nums.size() - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target)
        {
            res[0] = mid;
            right = mid - 1;
        }
        else if (nums[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    left =0;
    right = nums.size()-1;
    while(left<=right){
        int mid = left+(right-left)/2;
        if(nums[mid]==target){
            res[1]= mid;
            left = mid+1;
        }
        else if(nums[mid]<target)
        {
            left = mid+1;
        }
        else{
            right = mid-1;
        }
    }
    return res;
}
int main()
{
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;
    vector<int>result = searchRange(nums, target);
    cout<<result[0]<<","<<result[1]<<endl;
    return 0;
}