class Solution {
private:
 void get(int i,int k,int n,vector<int>combin,vector<vector<int>>&ans){
    if(combin.size()==k){
        if(n==0){
            ans.push_back(combin);
            return ;
        }
    }
    if(i>9 || i<0) return;
    combin.push_back(i);
    get(i+1,k,n-i,combin,ans);
    combin.pop_back();
    get(i+1,k,n,combin,ans);
 }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
         vector<vector<int>> ans;
         vector<int> combin;
         get(1,k,n,combin,ans);
         return ans;      
    }
};