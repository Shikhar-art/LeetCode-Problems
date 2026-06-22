class Solution {
public:
    char kthCharacter(int k) {
        int inc = 0;
    k--;
    while(k){
        inc += k&1;
        k >>= 1;
    }
    return (inc%26) + 'a';
    }
};