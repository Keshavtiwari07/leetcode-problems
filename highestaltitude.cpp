class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int ans=INT_MIN;
        vector<int> altitude;

        //pushing the starting altiude value
        altitude.push_back(0);

        for(int i=1;i<=gain.size();i++){
            altitude.push_back(gain[i-1]+altitude[i-1]);
        }

        //check the altitude vector by uncommenting below
        // for(auto val:altitude){
        //     cout<<val <<" ";
        // }

        ans=*max_element(altitude.begin(),altitude.end());

        return ans;
    }
};