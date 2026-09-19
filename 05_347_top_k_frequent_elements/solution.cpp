#include <unordered_map>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int, int> count;
        for(int num: nums){
            count[num]++;
        }

        multimap<int, int> frequency;
        for(auto pair: count){
            frequency.insert({pair.second, pair.first});
        }

        vector<int> result;
        auto it = frequency.rbegin();
        for (int i = 0; i < k; i++) {
            result.push_back(it->second);
            it++;
        }

        return result;
    }
};
