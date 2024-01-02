class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
		
		// iterating fromt 0 to n
        for(int i = 0; i<=n; i++)
        {
			// sum is initialised as 0
            int sum = 0;
            int num = i;
			
            while(num != 0) // while num not equals zero
            {
				// we have to count 1's in binary representation of i, therefore % 2
                sum += num%2;
                num = num/2;
            }
			
            ans.push_back(sum); // add sum to ans vector
        }
        return ans;
    }
};