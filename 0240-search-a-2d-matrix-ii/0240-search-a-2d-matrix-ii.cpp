class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
     int n=matrix.size();
     int m=matrix[0].size();
     int r=0,col=m-1;
     while(r<n && col>=0){
        if(matrix[r][col]==target){
            return true;
        }
        else if(matrix[r][col]<target){
            r++;
        }
        else{
            col--;
        }
     }      
     return false;
    }
};