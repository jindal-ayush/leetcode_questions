#include<iostream>
#include<vector>
using namespace std;
void maxArea(vector<int>height)
{
int end = height.size();
int st =0;
int index = -1;
    for(int i =0; i<height.size(); i++)
    {
        if(st<height[i])
        {
           st = height[i];
           index = i;
        }
     
    }
    while(st<end)
    {
        
    }
     cout<<st<<endl;
      cout<<index<<endl;
}
int main()
{
vector<int>height = {1,8,6,2,5,4,8,3,7};
maxArea(height);
}