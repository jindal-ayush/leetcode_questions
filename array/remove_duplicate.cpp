#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int removeDuplicates(vector<int> nums) {
   sort(nums.begin() , nums.end());
   int j =0;
   for(int i =1; i<nums.size(); i++)
   {
       if(nums[j] != nums[i])
       {
           j++;
           nums[j] =nums[i];
       }
   }
   return j+1;
}

int main() {
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    cout<<removeDuplicates(nums);

}


