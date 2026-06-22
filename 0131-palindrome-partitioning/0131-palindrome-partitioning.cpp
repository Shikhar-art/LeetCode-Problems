class Solution {
public:
bool palin(string s){
    string s2=s;
    reverse(s2.begin(),s2.end());
    return s==s2;
}
void get(string s,vector<string>&p,vector<vector<string>>&ans){
    if(s.size()==0){
        ans.push_back(p);
        return;
    }
    for(int i=0;i<s.size();i++){
        string part=s.substr(0,i+1);
        if(palin(part)){
           
            p.push_back(part);
            get(s.substr(i+1),p,ans);
            p.pop_back();
        }
    }
}
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> parts;
        get(s,parts,ans);
        return ans;
    }
};