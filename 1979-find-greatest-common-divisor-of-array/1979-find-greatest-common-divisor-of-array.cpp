class Solution {
public:
    int findGCD(vector<int>& nums) {
        int maxi=INT_MIN ,min=INT_MAX;
        int ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]>maxi){
                maxi=nums[i];
            }
        }
         for(int i=0;i<n;i++){
            if(nums[i]<min){
                min=nums[i];
            }
        }
        ans=gcd(maxi,min);
        return ans;
    }
};