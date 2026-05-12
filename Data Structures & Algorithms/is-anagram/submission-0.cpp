class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> freq1;
        map<char,int> freq2;

        for(auto i:s){
            freq1[i]++;
        }

        for(auto i:t){
            freq2[i]++;
        }

        if(freq1 == freq2) return true;
        else return false;

    }
};
