#include <vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map <int, int> frequency;

        for ( int num: nums){
            if (frequency.count(num) > 0){
                return true;
            }
            frequency[num] = 1;
        }
        return false;
    }
};
