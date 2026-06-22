
class Solution {
public:
    void get(vector<int>& arr, int i, int tar, vector<vector<int>>& ans, vector<int>& combin) {
        if (tar == 0) {
            ans.push_back(combin);
            return;
        }

        for (int j = i; j < arr.size(); j++) {
          
            if (j > i && arr[j] == arr[j - 1]) continue;
            
          
            if (arr[j] > tar) break;

            combin.push_back(arr[j]);
            get(arr, j + 1, tar - arr[j], ans, combin); // move to next index
            combin.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& arr, int target) {
        sort(arr.begin(), arr.end()); // sort for duplicate skipping
        vector<vector<int>> ans;
        vector<int> combin;
        get(arr, 0, target, ans, combin);
        return ans;
    }
};