class Solution {
private:
    void solve(vector<int>& nums, vector<int>& output, int idx, vector<vector<int>>& ans) {
        ans.push_back(output);

        for (int i = idx; i < nums.size(); i++) {
            
            if (i > idx && nums[i] == nums[i - 1]) continue;

            output.push_back(nums[i]);
            solve(nums, output, i + 1, ans);
            output.pop_back();  
        }
    }

public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        sort(nums.begin(), nums.end());  
        solve(nums, output, 0, ans);
        return ans;
    }
};
