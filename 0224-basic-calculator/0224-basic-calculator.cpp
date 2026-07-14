class Solution {
public:
    int i = 0;

    long long solve(string &s) {
        long long ans = 0;
        long long num = 0;
        int sign = 1;

        while (i < s.size()) {

            if (isdigit(s[i])) {
                num = 0;
                while (i < s.size() && isdigit(s[i])) {
                    num = num * 10 + (s[i] - '0');
                    i++;
                }
                ans += sign * num;
                continue;
            }

            if (s[i] == '+')
                sign = 1;
            else if (s[i] == '-')
                sign = -1;
            else if (s[i] == '(') {
                i++;
                ans += sign * solve(s);
                continue;
            }
            else if (s[i] == ')') {
                i++;
                return ans;
            }

            i++;
        }

        return ans;
    }

    int calculate(string s) {
        i = 0;
        return (int)solve(s);
    }
};