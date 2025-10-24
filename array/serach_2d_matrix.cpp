#include <iostream>
#include<vector>
using namespace std;
bool searchInRow(vector<vector<int>> &matrix ,int target , int row)
{
    int n = matrix[0].size();
    int st =0;
    int end = n-1;
    while(st<=end){
        int mid = st+(end-st)/2;
        if(target == matrix[row][mid]){
            return true;
        }
        else if(target>matrix[row][mid]){
            st = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return false;
    
}
bool abc(vector<vector<int>> &matrix ,int target)
{
    int m = matrix.size();
    int n = matrix[0].size();
    int startRow = 0;
    int endRow =  m-1;
   
    while(startRow<=endRow){
        int midRow = startRow+(endRow-startRow)/2;
if(target>=matrix[midRow][0] && target<=matrix[midRow][n-1])
        {
            return searchInRow(matrix, target ,midRow);
        }
        else if(target>matrix[midRow][n-1])
        {
            startRow =  midRow+1;
        }
        else{
            endRow =  midRow-1;
        }
    }
    return false;
}
int main() {
  vector<vector<int>>matrix = {{1,2,3,4}, {5,6,7,8},{9,10,11,12}, {13,14,15,16}};
  int target = 11;
   cout<<abc(matrix , target);
    return 0;
}