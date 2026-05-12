class Solution {
public:

    string encode(vector<string>& strs) {
        string ans="";
        for(auto i:strs){
            ans+=to_string(i.size()) + '#' + i;
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        
        int i=0;
        while(i<s.size()){
            int j=i;
            string len="";
            while(s[j]!='#'){
                len+=s[j];
                j++;
            }
            int lengthOfString = stoi(len);
            i = j+1;
            ans.push_back(s.substr(i,lengthOfString));
            i=i+lengthOfString;
        }
        return ans;
    }
};
