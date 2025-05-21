class Solution {
public:
    vector<vector<int>> results;
    void backtrack(vector<int> path, vector<int> nums, vector<bool> used){
        if (path.size()==nums.size()){
            results.push_back(path);
            return;
        }
        else
        {
            for(int i=0; i<nums.size(); i++)
            {
                if(used[i]==false){
                    path.push_back(nums[i]);
                    used[i]=true;
                    backtrack(path, nums, used);
                    used[i]=false;
                    path.pop_back();
                }
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> path;
        vector<bool> used(nums.size(), false);
        backtrack(path, nums, used);
        return results;
    }
};
