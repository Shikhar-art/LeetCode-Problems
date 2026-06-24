class Solution {
public:
    int countPrimes(int n) {
        vector<int>Prime(n+1,true);
        int cnt=0;
        if(n==0||n==1) return 0;
        for(int i=2;i<n;i++){
            if(Prime[i]){
             cnt++;
            }
            for(int j=2*i;j<n;j=j+i){
                Prime[j]=0;
            }
        }
        return cnt;
    }
};