class Solution {
public:
    vector<string> sortPeople(vector<string>& name, vector<int>& height) {
        vector<string> v(100001,"");
        for(int i=0;i<name.size();i++)
        {
            v[height[i]]=name[i];
        }
        reverse(v.begin(),v.end());
        v.erase(remove(v.begin(),v.end(),""), v.end());
        return v;
    }
};