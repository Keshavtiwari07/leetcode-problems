class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> answer;
        int running_sum = 0;
        for (int i = 0; i < nums.size(); i++){
            running_sum += nums[i];
            answer.push_back(running_sum);
        }
        return answer;
    }
};