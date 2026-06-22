class Solution {
    
   
public:
 set<vector<int>>s;
void get(vector<int>& arr,int idx,int tar,vector<vector<int>>&ans,vector<int> &combin){
    if (tar == 0) {
            ans.push_back(combin);
            return;
        }
        if (idx >= arr.size() || tar < 0) return;

        // include arr[idx]
        combin.push_back(arr[idx]);
        get(arr, idx, tar - arr[idx], ans, combin); // can reuse same element
        combin.pop_back();

        // move to next element
        get(arr, idx + 1, tar, ans, combin);
}
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<vector<int>>ans;
        vector<int>combin;
        get(arr,0,target,ans,combin);
        return ans;
    }
};