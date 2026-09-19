class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int prev_sum = 0;
        int result = -100000000000;
        for(int num : nums){
            prev_sum = max(prev_sum + num, num);
            if (prev_sum >= result){
                result = prev_sum;
            }
        }
        return result;
    }
};
