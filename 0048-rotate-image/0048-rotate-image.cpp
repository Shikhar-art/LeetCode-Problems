class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
     int n=matrix.size();
     int t=0,b=n-1;
     while(t<b){
        for(int c=0;c<n;c++){
            int temp=matrix[t][c];
            matrix[t][c]=matrix[b][c];
            matrix[b][c]=temp;
        }
        t++;
        b--;
     }   
     for(int r=0;r<n;r++){
        for(int c=r+1;c<n;c++){
            int temp=matrix[r][c];
            matrix[r][c]=matrix[c][r];
            matrix[c][r]=temp;
        }

     }
    }
};