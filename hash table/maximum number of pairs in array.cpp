class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int,int>mp;
        int pair=0,rem=0;
        for(int i=0;i<nums.size();i++) mp[nums[i]]++;
        for(auto it:mp){
            if(it.second%2!=0)  rem++;
            pair=pair+(it.second/2);
        }
        return {pair,rem};
    }
};