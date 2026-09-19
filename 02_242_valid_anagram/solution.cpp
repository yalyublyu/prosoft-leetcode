#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()){
            return false;
        }
        unordered_map <char, int> same_count;

        for ( int i = 0; i < s.length(); i++){
            same_count[s[i]]++;
            same_count[t[i]]--;
        }
        
        for (auto pair: same_count){
            if (pair.second != 0 ){
                return false;
            }
        }
        return true;
    }
};
