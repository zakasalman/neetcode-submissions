class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int,int> frq ;

    // each char in s increases its frquency
        for(char c : s) frq[c] ++ ; 
    // each char in t decreases its frequncy
        for(char c : t) frq[c] -- ; 

        for(auto &p : frq){
//    if frequncy after subtract is zero return false
          if(p.second != 0) return false ; // mismatch found 
        }

        return true ;
    }
};
