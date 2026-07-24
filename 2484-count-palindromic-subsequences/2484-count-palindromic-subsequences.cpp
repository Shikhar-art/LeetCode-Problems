class Solution {
public:
    int countPalindromes(string s) {
        const int mod = 1'000'000'007; 
        int n = s.size(); 
        long ans = 0; 
        for (int x = 0; x <= 9; ++x) 
            for (int y = 0; y <= 9; ++y) {
                vector<int> pattern = {x, y, 0, y, x}; 
                vector<long> dp(6); 
                dp[5] = 1; 
                for (int i = 0; i < n; ++i) 
                    for (int j = 0; j < 5; ++j) 
                        if (s[i] == pattern[j] + '0' || j == 2) dp[j] = (dp[j] + dp[j+1]) % mod; 
                ans = (ans + dp[0]) % mod; 
            }
        return ans; 
    }
};