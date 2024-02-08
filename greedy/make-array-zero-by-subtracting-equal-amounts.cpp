class Solution {
public:

   int fun(vector<int>& nums,int &count){
       
       int mini=INT_MAX;
       count++;

       for(int i=0;i<nums.size();i++){
           if(nums[i]>0){
               mini=min(mini,nums[i]);
           }
       }


       for(int i=0;i<nums.size();i++){
           if(nums[i]>0){
               nums[i]-=mini;
           }
       }

       for(int i=0;i<nums.size();i++){
           if(nums[i]!=0){
               fun(nums,count);
           }
       }

      return count;

   }

    int minimumOperations(vector<int>& nums) {
        
        if(nums.size()==1 && nums[0]==0){
            return 0;
        }

        int count=0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                return fun(nums,count);
            }
        }
        return count;
        
    }
};