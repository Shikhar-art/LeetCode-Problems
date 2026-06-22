class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      int l=0;
      int ml=0;
      unordered_set<char> charSet;
      for(int r=0;r<s.length();r++){
        while(charSet.find(s[r])!=charSet.end()){
            charSet.erase(s[l]);
            l++;
        }
        charSet.insert(s[r]);
        ml=max(ml,r-l+1);

      } 
      return ml; 
    }
};