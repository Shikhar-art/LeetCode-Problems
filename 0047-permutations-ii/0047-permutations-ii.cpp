class Solution {
private:
void solve(vector<int> nums,int idx,vector<vector<int>>&ans){
    if(idx>=nums.size()){
        ans.push_back(nums);
        return;
    }
    
    unordered_set<int> used;
    for(int j=idx;j<nums.size();j++){
       if(used.count(nums[j])){
        continue;
       }
       used.insert(nums[j]);
        swap(nums[idx],nums[j]);
        solve(nums,idx+1,ans);
        swap(nums[idx],nums[j]);
    }
}
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        solve(nums,0,ans);
        return ans;
    }
};