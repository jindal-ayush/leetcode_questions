#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 void findMedianSortedArrays(vector<int>nums1, vector<int>nums2)
 {
    vector<int>merged;
     double output =0.0;
    for(int i =0; i<nums1.size(); i++)
    {
       merged.push_back(nums1[i]);
    }
    for(int j =0; j<nums2.size(); j++)
    {
        merged.push_back(nums2[j]);
    }
       sort(merged.begin(), merged.end());
       
         int n = merged.size();
       
         if(n%2==0)
         {
             output = (merged[n/2-1]+merged[n/2])/2.0;
         }
         else{
             output = merged[n/2];
         }
    cout<<output;
 }
int main()
{
   vector<int>nums1 ={1,3};
   vector<int>nums2 ={2,4};
   findMedianSortedArrays(nums1,nums2);
}