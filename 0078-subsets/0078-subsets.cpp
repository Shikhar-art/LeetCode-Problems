class Solution {
private:
 void solve(vector<int> nums,vector<int>  output,int indx,vector<vector<int>> &ans){
  if(indx>=nums.size()){
    ans.push_back(output);
    return ;
  }
  solve(nums,output,indx+1,ans);
  int element=nums[indx];
  output.push_back(element);
  solve(nums,output,indx+1,ans);
 }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        int indx=0;
        solve(nums,output,indx,ans);
        return ans;
    }
};