class Solution {
private:
void solve(string digits,string output,int idx,vector<string>& ans,vector<string>& mapping){
    if(idx>=digits.length()){
        ans.push_back(output);
        return;
    }
    int digit=digits[idx]-'0';
    string letters=mapping[digit];
    for(char ch:letters){
        solve(digits,output+ch,idx+1,ans,mapping);
    }
}
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        string output="";
        int idx=0;
          vector<string> mapping = {
            "",    "",    "abc", "def", "ghi",
            "jkl", "mno", "pqrs", "tuv", "wxyz"
        };
        solve(digits,output,idx,ans,mapping);
        return ans;
    }
};