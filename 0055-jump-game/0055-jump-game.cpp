class Solution {
public:
    bool canJump(vector<int>& nums) {
        int Mr=0;
        for(int i=0;i<nums.size();i++){
            if(i>Mr) return false;
            Mr=max(Mr,i+nums[i]);
        }
        return true;
    }
};